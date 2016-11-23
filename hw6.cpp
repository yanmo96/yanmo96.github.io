for(int i = 0; i < C; i++)
{

  for(int j = 0; j < items; j++)
  {
    int x, y, z = 0
    z = A[i][j - 1]
    if(s[j] <= i)
    {
      x = A[i][j - 1] +  A[i - S[j]][j];
      y = A[i - S[j]][j];
    }
    A[i][j] = max( x, y ,z)
  }
}
