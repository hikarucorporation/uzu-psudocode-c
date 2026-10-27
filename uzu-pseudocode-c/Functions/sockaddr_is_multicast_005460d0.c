// Function : sockaddr_is_multicast
// Namespace: 
// Entry    : 005460d0
// Prototype: bool sockaddr_is_multicast(short * param_1)
// Body     : 005460d0 - 00546103


bool sockaddr_is_multicast(short *param_1)

{
  if (*param_1 == 2) {
    return (*(uint *)(param_1 + 2) & 0xf0) == 0xe0;
  }
  if (*param_1 == 10) {
    return (char)param_1[4] == -1;
  }
  return false;
}


