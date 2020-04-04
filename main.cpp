#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"
#include "Gallery.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList();
    Gallery* emoticons = new Gallery();
    Hyperlink language_link;

    language_link.text = "C++";
    language_link.url = "https://www.cplusplus.com/";
    languages->set_at(1, language_link);
    language_link.text = "Python";
    language_link.url = "https://www.python.org/";
    languages->set_at(2, language_link);
    language_link.text = "JavaScript";
    language_link.url = "https://www.javascript.com/";
    languages->set_at(3, language_link);
    language_link.text = "Java";
    language_link.url = "https://www.java.com/";
    languages->set_at(4, language_link);
    language_link.text = "C";
    language_link.url = "https://en.language_linkreference.com/w/c/language";
    languages->set_at(5, language_link);
    language_link.text = "R";
    language_link.url = "https://www.r-project.org/";
    languages->set_at(6, language_link);
    language_link.text = "Ruby";
    language_link.url = "https://www.ruby-lang.org/en/";
    languages->set_at(7, language_link);
    language_link.text = "Swift";
    language_link.url = "https://developer.apple.com/swift/";
    languages->set_at(8, language_link);
    language_link.text = "Go";
    language_link.url = "https://golang.org/";
    languages->set_at(9, language_link);
    language_link.text = "Dart";
    language_link.url = "https://dart.dev/";
    languages->set_at(10, language_link);

    emoticons->add(":)","Smile");
    emoticons->add(":(","Frown");
    emoticons->add(":()","Monkey");

    languages->display_forward();
    emoticons->display_backward();

    return 0;
}
