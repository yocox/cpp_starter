#include <foo/foo.hpp>
#include <foo/bar.hpp>
#include <boost/ut.hpp>

int main() {
    using namespace boost::ut;
    "foo"_test = [] {
        expect(56_i == foo::foo());
        expect(42_i == foo::bar());
    };
}