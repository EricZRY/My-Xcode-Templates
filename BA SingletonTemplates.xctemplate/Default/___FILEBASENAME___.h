//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef ___FILEBASENAMEASIDENTIFIER___h
#define ___FILEBASENAMEASIDENTIFIER___h

template <class T>
class ___FILEBASENAMEASIDENTIFIER___ {
private:
    ___FILEBASENAMEASIDENTIFIER___(const ___FILEBASENAMEASIDENTIFIER___&) = delete;
    ___FILEBASENAMEASIDENTIFIER___& operator=(const ___FILEBASENAMEASIDENTIFIER___&) = delete;
    static bool _isInstanceSet;
protected:
    ___FILEBASENAMEASIDENTIFIER___(){};
    ~___FILEBASENAMEASIDENTIFIER___(){};
    
    virtual void purge() = 0;
public:
    
    static T& getInstance(){
        static T _instance;
        _isInstanceSet = true;
        return _instance;
    }
    static void purgeData(){
        if (_isInstanceSet) {
            getInstance().purge();
            _isInstanceSet = false;
        }
    }
};
template <class T>
bool ___FILEBASENAMEASIDENTIFIER___<T>::_isInstanceSet = false;

#endif /* ___FILEBASENAMEASIDENTIFIER___h */
