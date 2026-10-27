// Function : pd_defaultsymbol
// Namespace: 
// Entry    : 00536390
// Prototype: undefined pd_defaultsymbol(long * param_1, undefined8 param_2)
// Body     : 00536390 - 00536410


void pd_defaultsymbol(long *param_1,undefined8 param_2)

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
    local_20[0] = 2;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(lVar1 + 0x60))(param_1,*plVar3 + 0x90,1,local_20);
    return;
  }
  local_20[0] = 2;
  (*pcVar2)(param_1,0,1,local_20);
  return;
}


