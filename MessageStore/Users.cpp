#include "Users.h"
namespace king::test
{
    bool Users::Exists(const string& u) const
    {
        return users_set.contains(u);
    }
    bool Users::Add(const string& u)  
    {
        users_set.insert(u);
        return true;
    }

}