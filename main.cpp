#include "my_project_app.h"

extern MyLogger* mylog;
    
#ifdef HISTORY
    //MyApplication::instance();
    //MyApplication::start();
    //my_utility();

    /* 
    MyString mystring (const_cast<char*>("Hi, Amaresh Kumar! Have good time!")); 
        
    MyString newString = mystring;       
    cout<<"Original: "<<mystring.GetMyString()<<endl;
    cout<<"Copied (With =) : "<<newString.GetMyString()<<endl;
        
    //        char* stringToReverse = (char*) "Amaresh";
    //        mystring.StringReverse(stringToReverse);
    //        cout << "\nREversed String: " <<stringToReverse<<endl; 
               
    MyString newString2 (mystring);
    cout<<"Copied (With Bracket): "<<newString2.GetMyString()<<endl;
        
    MyString newString3; 
    newString3 = mystring; 
    cout<<"Copied (With Assign Op): "<<newString2.GetMyString()<<endl;
        
    cout <<"No of String object now: "<<mystring.Get_No_of_MyString_Obj()<<endl;
        
    cout<<"\n\nSmart pointers\n";
    std::shared_ptr <MyString> p_myString = std::make_shared<MyString>(); 
    p_myString->SetMyString("my string");
    cout<<"My String Value:"<<p_myString->GetMyString()<<endl; 
    cout <<"No of String object now: "<<p_myString->Get_No_of_MyString_Obj()<<endl; */

    //mylog->log_msg("Done with String Class writing\n");

    //Enable this after implementing append function

    /* 
        
     * //Follwing was successfully done
    char* hello = (char*) "I'm Amaresh";
        
    MyString newString ("Hi There, ");
    char* result = newString.myAppend(hello); 
        
    cout << result; 
     */

    //To do following snippet, not working
    /*
    mylog->log_msg("Time now is: ");
    time_t timev;
    struct tm *timenow;
    time(&timev);
    timenow = localtime(&timev);

    mylog->log_msg(reinterpret_cast<char*> (timenow));
    */

    //const char* str = "Hi, how are you";
    //cout <<"After reversal: "<< MyString::MyStringReverse(str)<<endl;
    //mylog->log_msg ("Hi, " + "mylog");  // to do. 
    //cout << "Reversed string is: " << ReverseWordWise(str);
    //mylog->log_msg("Smart pointers practises\n");


    //std::shared_ptr<IFelid> mytiger = std::make_shared<Tiger>();
    //std::shared_ptr<Tiger> mytiger_sh = std::make_shared<Tiger>("My Shared Tiger\n");
    //auto mytigerAuto = std::make_shared<Tiger>("My Auto Tiger in C++11\n");
    //std::unique_ptr<Tiger> mytiger3("My Unique Tiger");
    //std::auto_ptr<Tiger> mytiger3;

    mylog->log_msg("Using Shared Pointer");
    //mylog->log_msg (mytiger_sh->get_name());
    mylog->log_msg("Using Auto Pointer");
    //mylog->log_msg (mytigerAuto->get_name());

    mylog->log_msg("Doing more clarification on Shared and Unique smart pointers\n");

    //std::weak_ptr<Tiger> mytigerWeak = mytiger_sh;
    //mytiger_sh.reset();
    mylog->log_msg("After resetting memory for shared pointer: \nIt should Segmentation fault here\n Disbaling following line");
    //mylog->log_msg(mytiger_sh->get_name());

    //std::shared_ptr<Tiger> mytiger_sh2 = std::make_shared<Tiger>("My Second Shared Tiger\n");
    //std::shared_ptr<Tiger> mytiger_sh3 = mytiger_sh2;
    //mytiger_sh2.reset();
    mylog->log_msg("AFter resetting memory for shared pointer mytiger_sh2: ");
    //mylog->log_msg (mytiger_sh3->get_name()); 

    mylog->log_msg("this line \" + If you see \" + \"with multiple + gives compilation error\n To Fix\n");

    mylog->log_msg("Threading practises\n");
    mylog->log_msg(("creating 2 threads\n"));

    //    pthread_t th1 ;
    //    pthread_t th2; 
    //    void* hallo = const_cast<char*>("hello"); 
    //    
    //    int t1 = pthread_create(&th1, NULL, increment_by_five, hallo);
    //    
    //    mylog->log_msg ("value of th1: ");
    //    mylog->log_msg (<char*>t1);

    //mylog->log_msg ("Practising with Boost lib\n");

    mylog->log_msg("Practising uses of Iterators");
    /*
    std::vector <int> myvect; 
    
    for (int i = -10 ; i < 10; i++){
        myvect.push_back(i);
    }
    
    mylog->log_msg ("Printing values: using iterator\n");
    vector<int>::iterator it; 
    
    for (it = myvect.begin(); it < myvect.end(); it++){
        cout <<*it<<" ";
    }
    
    cout << "\n" << myvect.size();
    
    myvect.push_back (100);
    cout <<"\nNow size is: " << myvect.size();
    myvect.pop_back();
    cout <<"\nNow size is: " << myvect.size();
    
    
    mylog->log_msg ("Using std::Set functionalities\n");
    
    std::cout<<std::endl;
    set <int, std::greater<int>> myset; 
    myset.insert({1, 4, 20, 3, 7});
    myset.insert(10);
    myset.insert(20);
    myset.insert(20);
    myset.insert(100);
    
    cout << "size of myset is: " <<myset.size()<<endl;
    
    ///copy (myset.begin(), myset.end()), ostream_iterator<int>(cout, "");
    for (int elem : myset){cout <<elem<<" ";}
    
    
    std::cout<<std::endl;
    mylog->log_msg ("Using std::multiset functionalities\n");
    multiset <int, std::greater<int>> mymset; 
    mymset.insert({1, 4, 20, 3, 7});
    cout << "size of mymset is: " <<mymset.size()<<endl;
    mymset.insert(10);
    mymset.insert(20);
    mymset.insert(20);
    mymset.insert(100);
    cout << "size of mymset is: " <<mymset.size()<<endl;
    for (int elem : mymset){cout <<elem<<" ";}
    
    
    mylog->log_msg ("Using map and multimap\n");
    map <int, string> map;
    map.insert (make_pair (1, "Amaresh"));
    map.insert (make_pair (2, "Akki"));
    map.insert (make_pair (3, "Kirti"));
    map.insert (make_pair (4, "Rashmi"));
    
    cout <<"\nSize of map: " << map.size() << "\nand maximum possible size is: " << map.max_size()<<endl;
    mylog->log_msg ("Printing elements of map\n");
    
    for (auto ele : map){
        cout << ele.first <<" "<<ele.second<<endl;
    }
    
    map.insert (std::pair <int, string>(4, "Rashmi"));
    map.insert (std::pair <int, string>(5, "Papa"));
    map.insert (std::pair <int, string>(5, "Papa"));
    map.insert (std::pair <int, string>(6, "Mommy"));
    cout <<"AFter insert:\n";
    cout <<"\nSize of map: " << map.size() << "\nand maximum possible size is: " << map.max_size()<<endl;
    
    for (auto ele : map){
        cout << ele.first <<" "<<ele.second<<endl;
    }
   
    cout << "\nMulti map\n";
    
    mylog->log_msg ("Using mmap and multimmap\n");
    std::multimap<int, string> mmap; 
    mmap.insert (make_pair (1, "Amaresh"));
    mmap.insert (make_pair (2, "Akki"));
    mmap.insert (make_pair (3, "Kirti"));
    mmap.insert (make_pair (4, "Rashmi"));
    
    cout <<"Size of mmap: " << mmap.size() << "\nand maximum possible size is: " << mmap.max_size()<<endl;
    mylog->log_msg ("Printing elements of mmap\n");
    
    for (auto ele : mmap){
        cout << ele.first <<" "<<ele.second<<endl;
    }
    
    mmap.insert (std::pair <int, string>(4, "Rashmi"));
    mmap.insert (std::pair <int, string>(5, "Papa"));
    mmap.insert (std::pair <int, string>(5, "Papa"));
    mmap.insert (std::pair <int, string>(6, "Mommy"));
    cout <<"AFter insert:\n";
    cout <<"\nSize of mmap: " << mmap.size() << "\nand maximum possible size is: " << mmap.max_size()<<endl;
    
    for (auto ele : mmap){
        cout << ele.first <<" "<<ele.second<<endl;
    }
    */
    mylog->log_msg ("End of container practises\n");
    
    //To fix following
//    Tiger tiger ("Mytiger");
//    cout << "\nName: "<<tiger.get_name() << "\tType: "<<tiger.get_type()<<"\nArea: "<<tiger.habitant_area()<<endl;
//    
//    Tiger tiger2 ("White Tiger", "Felid class");
//    cout << "\nName: "<<tiger2.get_name() << "\tType: "<<tiger2.get_type()<<"\tArea: "<<tiger2.habitant_area()<<endl;
//    
//    //mylog->log_msg (tiger.no_of_tigers());
    
    mylog->log_msg("Practising Template functions\n");
    
    mylog->log_msg ("Value returned from my_temp_function: ");
    //mylog->log_msg (my_temp_function("Hi TEmplate"));
    //Tiger tiger; 
    //cout << "Size of class \"Size\" now is: " << sizeof(Size)<<endl;
    mylog->log_msg ("Threading revisited\n");
    
//    pthread_t th1; 
//    //pthread_t th2; 
//    
//    int rc; 
//    
//    rc = pthread_create(&th1, NULL, thread_func, (void*)"hello");
//    
//    if (!rc) cout <<"\nThread with id: \n" << th1;

//    if (argc < 1) {
//        cout << "Not suffiecient arguments!!\n";
//    }
//    cout << "Enter sequences to be reversed: \n";
////    std::vector<char> cont;
//    char cont;
//    int i = 0;
//    
//    while (getchar() != '\n'){
//        strcpy (cont, getchar());
//        i++;
//    } 
//    cout << "you entered: ";
//    for (int i = 0; i < strlen(cont); i++){
//        cout << cont[i] << " ";
//    }
//    for (int i = strlen(cont); i < 0; i--){
//        cout << cont[i]<<"\n";
//    }    
    
#endif //HISTORY
  

int main(int argc, char* argv[]) {
    //myfork_test();
    //thread_func_mutex();
    //thread_func_cond();

    return 0;
}