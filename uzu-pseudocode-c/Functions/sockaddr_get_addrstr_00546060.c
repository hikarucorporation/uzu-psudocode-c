// Function : sockaddr_get_addrstr
// Namespace: 
// Entry    : 00546060
// Prototype: char * sockaddr_get_addrstr(short * param_1, char * param_2, socklen_t param_3)
// Body     : 00546060 - 0054608d


char * sockaddr_get_addrstr(short *param_1,char *param_2,socklen_t param_3)

{
  char *pcVar1;
  
  *param_2 = '\0';
  if (*param_1 == 2) {
    pcVar1 = inet_ntop(2,param_1 + 2,param_2,param_3);
    return pcVar1;
  }
  if (*param_1 == 10) {
    pcVar1 = inet_ntop(10,param_1 + 4,param_2,param_3);
    return pcVar1;
  }
  return (char *)0x0;
}


