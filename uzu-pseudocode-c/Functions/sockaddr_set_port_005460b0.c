// Function : sockaddr_set_port
// Namespace: 
// Entry    : 005460b0
// Prototype: undefined sockaddr_set_port(ushort * param_1, ushort param_2)
// Body     : 005460b0 - 005460c4


void sockaddr_set_port(ushort *param_1,ushort param_2)

{
  if ((*param_1 | 8) == 10) {
    param_1[1] = param_2 << 8 | param_2 >> 8;
  }
  return;
}


