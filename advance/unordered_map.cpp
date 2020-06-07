//
// Created by smartfly on 2020/5/27.
//

#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

int test_unordered_map1();

int test_unordered_map2();

int main() {
    test_unordered_map1();
    test_unordered_map2();
    return 0;
}

int test_unordered_map1() {
    // Create an unordered_map of three strings (that map to strings)
    unordered_map<string, string> u = {
            {"RED",   "#FF0000"},
            {"GREEN", "#00FF00"},
            {"BLUE",  "#0000FF"}
    };
    // Iterate and print keys and values of unordered_map
    for (const auto &n : u) {
        cout << "Key:[" << n.first << "] Value:[" << n.second << "]" << endl;
    }
    // Add two new entries to the unordered_map
    u["BLACK"] = "#000000";
    u["WHITE"] = "#FFFFFF";

    // Outpur values by key
    cout << "The HEX of color RED is:[" << u["RED"] << "]" << endl;
    cout << "The HEX of color BLACK is:[" << u["BLACK"] << "]" << endl;
    cout << "The u's size: " << u.size() << endl;

    return 0;
}

int test_unordered_map2() {
    // at/size
    unordered_map<string, int> mymap = {{"Mars",    3000},
                                        {"Saturn",  60000},
                                        {"Jupiter", 70000}};
    mymap.at("Mars") = 3396;
    mymap.at("Saturn") += 272;
    mymap.at("Jupiter") = mymap.at("Saturn") + 9638;
    for (auto &x: mymap) {
        cout << x.first << ": " << x.second << endl;
    }

    cout << "mymap.size() is " << mymap.size() << endl;
    // begin
    unordered_map<string, string> mymap2 = {{"Australia", "Canberra"},
                                            {"U.S.",      "Washington"},
                                            {"France",    "Paris"}};
    cout << "mymap2 contains:";
    for (auto &it : mymap2) {
        cout << " " << it.first << ":" << it.second;
    }
    cout << endl;

    cout << "mymap2's buckets contain:\n";
    for (unsigned i = 0; i < mymap2.bucket_count(); ++i) {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = mymap2.begin(i); local_it != mymap2.end(i); ++local_it)
            cout << " " << local_it->first << ":" << local_it->second;
        cout << endl;
    }

    //bucket
    unordered_map<string, string> mymap3 = {
            {"us", "United States"},
            {"uk", "United Kingdom"},
            {"fr", "France"},
            {"de", "Germany"}
    };
    for (auto &x : mymap3) {
        cout << "Element [" << x.first << ":" << x.second << "]";
        cout << " is in bucket #" << mymap3.bucket(x.first) << endl;
    }

    // count
    cout << "count example" << endl;
    cout << "===============================" << endl;
    unordered_map<string, double> mymap4 = {
            {"Burger", 2.99},
            {"Fries",  1.99},
            {"Soda",   1.50}};

    for (auto &x : {"Burger", "Pizza", "Salad", "Soda"}) {
        if (mymap4.count(x) > 0) {
            cout << "mymap4 has " << x << endl;
        } else {
            cout << "mymap4 has no " << x << endl;
        }
    }

    // erase
    cout << "erase example" << endl;
    cout << "===============================" << endl;
    unordered_map<string, string> mymap5;
    mymap5["U.S."] = "Washington";
    mymap5["U.K."] = "London";
    mymap5["France"] = "Paris";
    mymap5["Russia"] = "Moscow";
    mymap5["China"] = "Beijing";
    mymap5["Germany"] = "Berlin";
    mymap5["Japan"] = "Tokyo";

    mymap5.erase(mymap5.begin());       //erasing by iterator
    mymap5.erase("France");          //erasing by key
    mymap5.erase(mymap5.find("China"), mymap5.end());   //erasing by range
    for (auto &x: mymap5) {
        cout << x.first << ":" << x.second << endl;
    }

    // find
    unordered_map<string, double> mymap6 = {
            {"mom", 5.4},
            {"dad", 6.1},
            {"bro", 5.9}};
    string input;
    cout << "who? ";
    getline(cin, input);
    unordered_map<string,double>::const_iterator got = mymap6.find(input);
    if (got == mymap6.end()) {
        cout << "not found";
    } else {
        cout << got->first << " is " << got->second << endl;
    }
    return 0;
}