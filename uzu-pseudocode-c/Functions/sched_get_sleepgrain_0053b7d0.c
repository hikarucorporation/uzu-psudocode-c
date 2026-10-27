// Function : sched_get_sleepgrain
// Namespace: 
// Entry    : 0053b7d0
// Prototype: int sched_get_sleepgrain(void)
// Body     : 0053b7d0 - 0053b818


int sched_get_sleepgrain(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)PTR_sys_sleepgrain_00715c20;
  if ((0 < iVar1) || (iVar1 = 1000, sched_useaudio != 1)) {
    return iVar1;
  }
  iVar1 = *(int *)PTR_sys_schedadvance_00715858;
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar3 = 100;
  if (100 < iVar2 >> 2) {
    iVar3 = iVar2 >> 2;
  }
  iVar2 = 5000;
  if (iVar1 < 0x4e24) {
    iVar2 = iVar3;
  }
  return iVar2;
}


