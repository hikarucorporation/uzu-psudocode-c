// Function : cmp
// Namespace: OT:cff1:accelerator_t:gname_t
// Entry    : 0044a540
// Prototype: int cmp(undefined8 * param_1, undefined8 * param_2)
// Body     : 0044a540 - 0044a55f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::cff1::accelerator_t::gname_t::cmp(void const*, void const*) */

int __cdecl OT::cff1::accelerator_t::gname_t::cmp(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)(param_2 + 1);
  uVar3 = uVar1;
  if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
    uVar3 = uVar2;
  }
  iVar4 = strncmp((char *)*param_1,(char *)*param_2,(ulong)uVar3);
  if (iVar4 == 0) {
    iVar4 = uVar1 - uVar2;
  }
  return iVar4;
}


