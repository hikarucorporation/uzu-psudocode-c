// Function : bindlist_list
// Namespace: 
// Entry    : 0053a870
// Prototype: undefined bindlist_list(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
// Body     : 0053a870 - 0053a8d1


void bindlist_list(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    plVar2 = (long *)*puVar1;
    lVar3 = *plVar2;
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(lVar3 + 0x58))(plVar2,*plVar4 + 0xc0,param_3,param_4);
  }
  return;
}


