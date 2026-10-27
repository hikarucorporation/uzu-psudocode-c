// Function : socket_close
// Namespace: 
// Entry    : 00546380
// Prototype: undefined socket_close(int param_1)
// Body     : 00546380 - 00546389


void socket_close(int param_1)

{
  if (param_1 < 0) {
    return;
  }
  close(param_1);
  return;
}


