//
//  BANatureSeqSet.h
//  IF
//
//  Created by EricZhang on 2016/11/16.
//
//

#ifndef BANatureSeqSet_h
#define BANatureSeqSet_h

#include "CommonInclude.h"

template <class T>
class BANatureSeqSet
{
public:
    typedef typename std::vector<T>::iterator _mType;
private:
    std::vector<T> _v;
    std::map<T, _mType> _m;
public:
    T& at(ssize_t idx){return _v.at(idx);};
    bool has(const T& t){return _m.find(t) != _m.end();};
    void push_back(const T& _t){
        CCASSERT(_m.find(_t) == _m.end(), "already has this item");
        if (_m.find(_t) != _m.end()) return;
        _v.push_back(_t);
        _mType pu = _v.begin() + _v.size() - 1;
        _m[_t] = pu;
    };
    void clear(){_m.clear();_v.clear();};
    ssize_t size(){return _v.size();};
    _mType find(const T& _t){
        if (!has(_t)) return _v.end();
        return _m[_t];
    };
    _mType end(){
        return _v.end();
    };
};

#endif /* BANatureSeqSet_h */
