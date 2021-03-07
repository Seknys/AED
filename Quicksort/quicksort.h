
namespace qks
{

    int mitad (int arr[],int principal, int pfinal)
{

  return arr[(principal+pfinal)/2];
}

void ordenar (int arr[],int principal, int pfinal)
{
  int i=principal;
  int j=pfinal;
  int temp;
  int piv=mitad(arr,principal,pfinal);
  do
  {
    while(arr[i]<piv)
    {
      i++;
    }
    while (arr[j]>piv)
    {
      j--;
    }
    if(i<=j)
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
      j--;
    }
  }while(i<=j);
  if(principal<j)
    ordenar(arr,principal,j);
    if(i<pfinal)
    ordenar(arr,i,pfinal);

}
}
