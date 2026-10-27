// Function : pd_defaultfloat
// Namespace: 
// Entry    : 00536300
// Prototype: undefined pd_defaultfloat(undefined4 param_1, long * param_2)
// Body     : 00536300 - 00536381


void pd_defaultfloat(undefined4 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = *param_2;
  pcVar2 = *(code **)(lVar1 + 0x58);
  local_18 = param_1;
  if (pcVar2 == pd_defaultlist) {
    local_20[0] = 1;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(lVar1 + 0x60))(param_2,*plVar3 + 0x78,1,local_20);
    return;
  }
  local_20[0] = 1;
  (*pcVar2)(param_2,0,1,local_20);
  return;
}


