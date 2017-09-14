int main()
{
  char ch='0';
  
  cout<<"Enter an alphabet";
  cin>>ch;
  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
  {
  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    cout<<endl<<"The alphabet is a vowel";
  else 
    cout<<endl<<"The alphabet is a consonant";
  }
  else
  {
  cout<<endl<<"THIS IS NOT AN ALPHABET!";
  }
  return 0;
}
