// Function : addrinfo_get_list
// Namespace: 
// Entry    : 00545dc0
// Prototype: undefined addrinfo_get_list(addrinfo * * param_1, char * param_2, undefined8 param_3, int param_4)
// Body     : 00545dc0 - 00545e93


void addrinfo_get_list(addrinfo **param_1,char *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  char local_52 [10];
  addrinfo local_48;
  
  local_48.ai_protocol = 0x11;
  if (param_4 == 1) {
    local_48.ai_protocol = 6;
  }
  local_48.ai_addrlen = 0;
  local_48._20_4_ = 0;
  local_48.ai_addr = (sockaddr *)0x0;
  local_48.ai_canonname = (char *)0x0;
  local_48.ai_next = (addrinfo *)0x0;
  local_48.ai_socktype = param_4;
  local_48.ai_flags = 0x19;
  local_48.ai_family = 0;
  local_52[0] = '\0';
  sprintf(local_52,"%d",(int)param_3);
  iVar1 = getaddrinfo(param_2,local_52,&local_48,param_1);
  if (iVar1 == -1) {
    if (addrinfo_get_list_warned == '\0') {
      fwrite("Warning: can\'t create IPv6 dual-stack socket - falling back to IPv4. (This is a known bug in the BSD libc, which doesn\'t implement the AI_ALL and AI_V4MAPPED flags for getaddrinfo().)\n"
             ,0xb8,1,*(FILE **)PTR_stderr_00715948);
      addrinfo_get_list_warned = '\x01';
    }
    local_48.ai_flags = 1;
    local_48.ai_family = 2;
    getaddrinfo(param_2,local_52,&local_48,param_1);
  }
  return;
}


