int partition (int arr[], int low, int high)

{

    int pivot = arr[high];    // pivot

    int left = low;

    int right = high – 1;

    while(true){

        while(left <= right && arr[left] < pivot) left++; // Tìm phần tử >= arr[pivot]

        while(right >= left && arr[right] > pivot) right–; // Tìm phần tử <= arr[pivot]

        if (left >= right) break; // Đã duyệt xong thì thoát vòng lặp

        swap(&arr[left], &arr[right]); // Nếu chưa xong, đổi chỗ.

        left++; // Vì left hiện tại đã xét, nên cần tăng

        right–; // Vì right hiện tại đã xét, nên cần giảm

    }

    swap(&arr[left], &arr[high]);

    return left; // Trả về chỉ số sẽ dùng để chia đổi mảng

}
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n,m ;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		partition(a,0,n);
		int x=n-1
		for(int i=0;i<m;i++)
		{
			cout<<a[x]<<" ";
			if(i<m)
			{
				x--;
			}
		}
		
	}
}