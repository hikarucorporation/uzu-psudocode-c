// Function : signal_newfromcontext
// Namespace: 
// Entry    : 004f68b0
// Prototype: int * signal_newfromcontext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, ulong param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f68b0 - 004f691c


int * signal_newfromcontext
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,ulong param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  
  plVar2 = (long *)__tls_get_addr();
  iVar4 = 0;
  lVar1 = *(long *)(*(long *)(*plVar2 + 0x40) + 0x138);
  if (param_9 == 0) {
    iVar4 = *(int *)(lVar1 + 0x20);
  }
  piVar3 = signal_new((ulong)*(uint *)(lVar1 + 0x30),param_2,param_3,param_4,param_5,param_6,param_7
                      ,param_8,iVar4,param_10 & 0xffffffff,0,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  piVar3[6] = *(int *)(*(long *)(*(long *)(*plVar2 + 0x40) + 0x138) + 0x38);
  return piVar3;
}


