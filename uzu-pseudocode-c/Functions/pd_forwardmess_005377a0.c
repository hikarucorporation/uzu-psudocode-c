// Function : pd_forwardmess
// Namespace: 
// Entry    : 005377a0
// Prototype: undefined pd_forwardmess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, int * param_11, undefined8 param_12, uint * param_13, uint * param_14, undefined1 param_15)
// Body     : 005377a0 - 00537847


void pd_forwardmess(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                   undefined8 param_10,int *param_11,undefined8 param_12,uint *param_13,
                   uint *param_14,undefined1 param_15)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = (int)param_10;
  if (iVar3 == 0) {
    return;
  }
  iVar1 = *param_11;
  if (iVar1 == 1) {
    if (iVar3 == 1) {
      pd_float(param_9);
      return;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        pd_typedmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     *(undefined8 **)(param_11 + 2),iVar3 - 1,param_11 + 4,param_13,param_14);
        return;
      }
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"pd_forwardmess",param_10,
          param_11,param_12,(char *)param_13,param_14,param_15);
      return;
    }
    if (iVar3 == 1) {
      pd_pointer(param_9);
      return;
    }
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  pd_list(param_9,*plVar2 + 0xc0,iVar3,param_11);
  return;
}


