
// Parenthesis Checker - Function to return if the paranthesis are balanced or not
// Expected Time Complexity: O(|x|)
// Expected Auixilliary Space: O(|x|)
bool ispar(string x)
{
  stack <char> stk;
  if (x[0] == ')' || x[0] == '}' || x[0] == ']')
    return false;
  for (int i = 0; i < x.length(); i++)
  {
    if (x[i] == ')')
    {
      if (stk.empty() )
      {
        return false;
      }
      else if ( stk.top() != '(')
      {
        return false;
      } else {
        stk.pop();
      }
    } else if (x[i] == ']')
    {
      if (stk.empty() )
      {
        return false;
      }
      else if (stk.top() == '[')
      {
        stk.pop();
      } else {
        return false;
      }
    } else if (x[i] == '}')
    {
      if (stk.empty() )
      {
        return false;
      }
      else if (stk.top() == '{')
      {
        stk.pop();
      } else {
        return false;
      }
    } else {
      stk.push(x[i]);
    }
  }
  return stk.empty();
}