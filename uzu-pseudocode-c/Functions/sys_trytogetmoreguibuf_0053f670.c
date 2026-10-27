// Function : sys_trytogetmoreguibuf
// Namespace: 
// Entry    : 0053f670
// Prototype: undefined sys_trytogetmoreguibuf(uint param_1)
// Body     : 0053f670 - 0053f77e


void sys_trytogetmoreguibuf(uint param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  ssize_t sVar4;
  size_t __n;
  int iVar5;
  int __fd;
  
  if (-1 < (int)param_1) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    pvVar3 = realloc(*(void **)(*(long *)(*plVar2 + 0x38) + 0x30),(ulong)param_1);
    if (pvVar3 != (void *)0x0) {
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar1 = *(long *)(*plVar2 + 0x38);
      *(uint *)(lVar1 + 0x40) = param_1;
      *(void **)(lVar1 + 0x30) = pvVar3;
      return;
    }
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar2 + 0x38);
  __n = (long)*(int *)(lVar1 + 0x38) - (long)*(int *)(lVar1 + 0x3c);
  __fd = *(int *)(lVar1 + 0x14);
  pvVar3 = (void *)((long)*(int *)(lVar1 + 0x3c) + *(long *)(lVar1 + 0x30));
  iVar5 = 0;
  while( true ) {
    sVar4 = send(__fd,pvVar3,__n,0);
    if ((int)sVar4 < 0) {
      perror("pd output pipe");
      if (sys_bail_reentered == '\0') {
        sys_bail_reentered = 1;
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
                    /* WARNING: Subroutine does not return */
      _exit(1);
    }
    iVar5 = (int)sVar4 + iVar5;
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar1 = *(long *)(*plVar2 + 0x38);
    if ((int)__n <= iVar5) break;
    __fd = *(int *)(lVar1 + 0x14);
    pvVar3 = (void *)((long)iVar5 + (long)*(int *)(lVar1 + 0x3c) + *(long *)(lVar1 + 0x30));
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}


