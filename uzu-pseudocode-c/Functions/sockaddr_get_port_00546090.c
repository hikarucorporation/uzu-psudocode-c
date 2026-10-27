// Function : sockaddr_get_port
// Namespace: 
// Entry    : 00546090
// Prototype: ushort sockaddr_get_port(ushort * param_1)
// Body     : 00546090 - 005460aa


ushort sockaddr_get_port(ushort *param_1)

{
  if ((*param_1 | 8) == 10) {
    return param_1[1] << 8 | param_1[1] >> 8;
  }
  return 0;
}


