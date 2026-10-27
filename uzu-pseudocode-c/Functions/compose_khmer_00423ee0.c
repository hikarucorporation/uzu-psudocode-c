// Function : compose_khmer
// Namespace: 
// Entry    : 00423ee0
// Prototype: bool compose_khmer(long param_1, ulong param_2, int param_3, undefined4 * param_4)
// Body     : 00423ee0 - 00423f54


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* compose_khmer(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int, unsigned int*)
    */

bool __cdecl compose_khmer(long param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
  if (uVar2 < 0x20) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2 & 0xffffffff,*(undefined8 *)(lVar1 + 0x68));
    if ((0x1c00U >> (uVar2 & 0x1f) & 1) != 0) {
      return false;
    }
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  bVar4 = false;
  if (((int)param_2 != 0) && (param_3 != 0)) {
    iVar3 = (**(code **)(lVar1 + 0x40))
                      (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0x80));
    bVar4 = iVar3 != 0;
  }
  return bVar4;
}


