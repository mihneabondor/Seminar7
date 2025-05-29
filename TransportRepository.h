//
// Created by Mihnea on 5/5/25.
//

#ifndef REPO_H
#define REPO_H
#include <vector>

using namespace std;
template <class T>
class TransportRepository {
    vector<T*> data;
    public:
    TransportRepository();
    TransportRepository(vector<T*>);
    ~TransportRepository();

    void add(T* );
    void remove(T* );
    void remove(int);
    void update(int, T* );

    int getIndex(T* );

    vector<T*> getData();
    void setData(vector<T*>);

    friend ostream& operator<<(ostream& os, TransportRepository<T*> repo) {
        for (int i = 0; i < repo.getData().size(); i++) {
            os << repo.getData()[i] << '\n';
        }
        return os;
    };
};

#include "TransportRepository.tpp"
#endif //REPO_H
