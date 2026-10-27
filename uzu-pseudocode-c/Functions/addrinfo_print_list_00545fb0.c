// Function : addrinfo_print_list
// Namespace: 
// Entry    : 00545fb0
// Prototype: undefined addrinfo_print_list(long param_1)
// Body     : 00545fb0 - 00546051


void addrinfo_print_list(long param_1)

{
  ushort uVar1;
  int __af;
  long lVar2;
  void *__cp;
  char *param1;
  char acStack_68 [56];
  
  if (param_1 != 0) {
    do {
      __af = *(int *)(param_1 + 4);
      if (__af == 2) {
        lVar2 = *(long *)(param_1 + 0x18);
        __cp = (void *)(lVar2 + 4);
        param1 = "IPv4";
LAB_00545ff3:
        uVar1 = *(ushort *)(lVar2 + 2);
        inet_ntop(__af,__cp,acStack_68,0x2e);
        printf("%s %s %d\n",param1,acStack_68,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8));
      }
      else if (__af == 10) {
        lVar2 = *(long *)(param_1 + 0x18);
        __cp = (void *)(lVar2 + 8);
        param1 = "IPv6";
        goto LAB_00545ff3;
      }
      param_1 = *(long *)(param_1 + 0x28);
    } while (param_1 != 0);
  }
  return;
}


