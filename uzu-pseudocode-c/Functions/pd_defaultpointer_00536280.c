// Function : pd_defaultpointer
// Namespace: 
// Entry    : 00536280
// Prototype: undefined pd_defaultpointer(long * param_1, undefined8 param_2)
// Body     : 00536280 - 005362ff


void pd_defaultpointer(long *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x58);
  local_18 = param_2;
  if (pcVar2 == pd_defaultlist) {
    local_20[0] = 3;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(lVar1 + 0x60))(param_1,*plVar3 + 0x60,1,local_20);
    return;
  }
  local_20[0] = 3;
  (*pcVar2)(param_1,0,1,local_20);
  return;
}


