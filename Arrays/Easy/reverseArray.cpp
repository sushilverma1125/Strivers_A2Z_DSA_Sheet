void reverseArray(vector<int> &arr)
{
    nt start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
