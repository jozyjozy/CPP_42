# include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    std::cout << "Default constructor called" << std::endl;
}


PmergeMe::PmergeMe(char **av) : _start(av)
{
    createVectAndDeque(_start);
    sortVectAndDeque();
    std::cout << "constructor called" << std::endl;
}

void    PmergeMe::printError()
{
    std::cout << "Error" << std::endl;
    exit (-1);
}

void    PmergeMe::createVectAndDeque(char** _start)
{
    int i = 1;
    int j = 0;

    while (_start[i])
    {
        j = 0;
        while (_start[i][j])
        {
            if (!isdigit(_start[i][j]))
                printError();
            j++;
        }
        vector.push_back(atoi(_start[i]));
        deque.push_back(atoi(_start[i]));
        i++;
    }
    i = 1;
    std::cout << "Before: ";
    while (_start[i])
    {
        std::cout << " " << _start[i];
        i++;
    }
    std::cout << std::endl;
}

void    PmergeMe::sortVectAndDeque()
{
    clock_t start_time;
    clock_t end_time;
    double time_vect;
    double time_deque;

    std::cout << "After: ";
    start_time = clock();
    int begin = 0;
    int end = this->vector.size() - 1;
    sortVectRecursif(begin, end);
    std::vector<int>::iterator it = this->vector.begin();
    while (it != this->vector.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << std::endl;
    end_time = clock();
    time_vect = end_time - start_time;
    std::cout << "Time  to  process a range  of " << this->vector.size() << " elements  with std::vector : " << 100 * time_vect / (CLOCKS_PER_SEC) << " us" << std::endl;

    start_time = clock();
    begin = 0;
    end = this->deque.size() - 1;
    sortDequeRecursif(begin, end);
    end_time = clock();
    time_deque = end_time - start_time;
    std::cout << "Time  to  process a range  of " << this->deque.size() << " elements  with std::deque : " << 100 * time_deque / (CLOCKS_PER_SEC) << " us" << std::endl;

}

void    PmergeMe::mergeVect(int b, int m, int e)
{
    int p1 = m - b + 1;
    int p2 = e - m;
    int i_right = 0;
    int i_left = 0;
    std::vector<int> left(this->vector.begin() + b, this->vector.begin() + m + 1);
    std::vector<int> right(this->vector.begin() + m + 1, this->vector.begin() + e + 1);

    int i = b;
    while (i <= e)
    {
        if (i_right == p2)
        {
            this->vector[i] = left[i_left];
            i_left++;
        }
        else if (i_left == p1)
        {
            this->vector[i] = right[i_right];
            i_right++;
        }
        else if (right[i_right] > left[i_left])
        {
            this->vector[i] = left[i_left];
            i_left++;
        }
        else
        {
            this->vector[i] = right[i_right];
            i_right++;
        }
        i++;
    }
}

void    PmergeMe::mergeDeque(int b, int m, int e)
{
    int p1 = m - b + 1;
    int p2 = e - m;
    int i_right = 0;
    int i_left = 0;
    std::deque<int> left(this->deque.begin() + b, this->deque.begin() + m + 1);
    std::deque<int> right(this->deque.begin() + m + 1, this->deque.begin() + e + 1);

    int i = b;
    while (i <= e)
    {
        if (i_right == p2)
        {
            this->deque[i] = left[i_left];
            i_left++;
        }
        else if (i_left == p1)
        {
            this->deque[i] = right[i_right];
            i_right++;
        }
        else if (right[i_right] > left[i_left])
        {
            this->deque[i] = left[i_left];
            i_left++;
        }
        else
        {
            this->deque[i] = right[i_right];
            i_right++;
        }
        i++;
    }
}

void    PmergeMe::insertDeque(int begin, int end)
{
    int i = begin;
    while (i < end)
    {
        int tmp = this->deque[i + 1];
        int j = i + 1;
        while (j > begin && this->deque[j - 1] > tmp)
        {
            this->deque[j] = this->deque[j - 1];
            j--;
        }
        this->deque[j] = tmp;
        i++;
    }
}

void    PmergeMe::insertVect(int begin, int end)
{
    int i = begin;
    while (i < end)
    {
        int tmp = this->vector[i + 1];
        int j = i + 1;
        while (j > begin && this->vector[j - 1] > tmp)
        {
            this->vector[j] = this->vector[j - 1];
            j--;
        }
        this->vector[j] = tmp;
        i++;
    }
}

void    PmergeMe::sortVectRecursif(int begin, int end)
{
    if (end - begin > 2)
    {
        int mediane = (begin + end) / 2;
        sortVectRecursif(begin, mediane);
        sortVectRecursif(mediane + 1, end);
        mergeVect(begin, mediane, end);
    }
    else
        insertVect(begin, end);
}

void    PmergeMe::sortDequeRecursif(int begin, int end)
{
    if (end - begin > 5)
    {
        int mediane = (begin + end) / 2;
        sortDequeRecursif(begin, mediane);
        sortDequeRecursif(mediane + 1, end);
        mergeDeque(begin, mediane, end);
    }
    else
        insertDeque(begin, end);
}


PmergeMe::~PmergeMe()
{
    std::cout << "Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src)
    {
        *this = src;
    }
    std::cout << "Copy constructor called" << std::endl;
    return (*this);
}
