#include <boost/ut.hpp>

#include <foo/foo.hpp>
#include <foo/bar.hpp>

namespace foo
{

int foo()
{
    int v = bar();
    return v + 14;
}

} // namespace foo
