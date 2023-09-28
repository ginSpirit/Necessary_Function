//Method-1, It's  the most efficient algorithm.
void distinctArray() {
    int n;
    cin >> n;
    vector<int> v(n);
    input(v);
    set <int> distinct;
    for (int i : v) {
        distinct.insert(i);
    }
    vector<int> distinct_array(distinct.begin(), distinct.end());
    //if you want to know how many distinct are there in that array, you can use :
    // cout << distinct_array.size() << endl;
    for (int i : distinct_array) {
        cout << i << " ";
    }
}
//Method-2. Easy to understand and implementation. I used Binary search in this method. recommending for beginners.
void Distinct_Array() {
    int n;
    cin >> n;
    vector<int> array(n); // int array[n];
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    sort(array.begin(), array.end()); // sort(array, array+n);
    for (int i=0; i<n; i++) {
        if (array[i]!=array[i+1]) {
            cout << array[i] << " ";
        }
    }
}
// Sub finction of method-2
void Count_Distinct_Array() {
    int n;
    cin >> n;
    vector<int> array(n); // int array[n];
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    int d=0;
    sort(array.begin(), array.end()); // sort(array, array+n);
    for (int i=0; i<n; i++) {
        if (array[i]!=array[i+1]) {
            d++;
        }
    }
    cout << d << endl;
}
