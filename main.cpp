#include <iostream>
#include<vector>

using namespace std;

template <typename T>
class Stack{
private:
    vector <T> elts;
public:
    bool empty(){
        return (elts.empty());
    }

    void print (){
	cout << "Hello World!";
    }

    void push(const T x){
        elts.push_back(x);
    }

    void pop(){
        elts.pop_back();
    }

    T & top (){
        return elts.back();
    }

    void print();
};

template<class T>
void Stack<T>::print(){
        cout << "Vectorul contine :";
            for (typename vector<T>::iterator it = elts.begin() ; it != elts.end(); ++it)
                cout << ' ' << *it;
        cout << '\n';
}

int main()
{
    Stack <int> stiva;
    Stack <char*> siruri;

    stiva.push(1);
    stiva.push(2);
    stiva.push(3);
    stiva.push(4);

    stiva.print();

    stiva.pop();

    stiva.print();

    if(stiva.empty())
        cout << "Stiva goala!\n";
    else
        cout << "Stiva nu este goala!\n";

    cout << "Ultimul element din stiva este: " << stiva.top() << "\n";


    cout << "\n\nStack de siruri:\n\n";
    char sir1[] = "ana";
    char sir2[] = "ion";
    siruri.push(sir1);
    siruri.push(sir2);

    siruri.print();

    siruri.pop();
    siruri.print();






    return 0;
}
