
// using array loop
int findTheWinner(int n, int k) {
    vector<int>vec(n);
    for (int i = 1; i <= n; i++) {
        vec[i-1] = i;
    }

    int i = 0;
    while(vec.size() != 1) {
        int position = (i+k-1) % vec.size();
        cout << position << " ";
        vec.erase(vec.begin()+position);

        i = position;
    }   
    return vec[0];
}


//using a Queue:
int findTheWinner(int n, int k) {

    queue<int>que;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }

    while(que.size() > 1) {
        for (int i = 1; i < k; i++) {
            int value = que.front();
            que.pop();
            que.push(value);
        }
        que.pop();
    }
    return que.front();
}