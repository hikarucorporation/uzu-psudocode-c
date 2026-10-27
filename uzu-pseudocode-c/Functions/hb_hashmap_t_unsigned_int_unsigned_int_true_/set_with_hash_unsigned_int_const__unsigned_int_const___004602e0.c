// Function : set_with_hash<unsigned_int_const&,unsigned_int_const&>
// Namespace: hb_hashmap_t_unsigned_int_unsigned_int_true_
// Entry    : 004602e0
// Prototype: bool set_with_hash<unsigned_int_const&,unsigned_int_const&>(hb_hashmap_t<unsigned_int,unsigned_int,true> * param_1, int * param_2, uint param_3)
// Body     : 004602e0 - 0046041d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool hb_hashmap_t<unsigned int, unsigned int, true>::set_with_hash<unsigned int const&, unsigned
   int const&>(unsigned int const&, unsigned int, unsigned int const&, bool) */

bool __cdecl
hb_hashmap_t<unsigned_int,unsigned_int,true>::set_with_hash<unsigned_int_const&,unsigned_int_const&>
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *param_1,int *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  if (param_1[0x10] == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) goto LAB_004603e7;
  if (*(uint *)(param_1 + 0x1c) <= (*(uint *)(param_1 + 0x18) >> 1) + *(uint *)(param_1 + 0x18)) {
    bVar2 = alloc(param_1,0);
    in_EAX = (uint)bVar2;
    if (!bVar2) goto LAB_004603e7;
  }
  uVar4 = 0;
  uVar5 = (ulong)(param_3 & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  uVar7 = *(uint *)(lVar1 + 4 + uVar5 * 0xc);
  if ((uVar7 & 2) == 0) {
LAB_0046038b:
    uVar9 = uVar5;
  }
  else {
    uVar9 = 0xffffffff;
    uVar4 = 0;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)(lVar1 + uVar5 * 0xc) == *param_2) goto joined_r0x004603f8;
      if (iVar8 == -1 && (uVar7 & 1) == 0) {
        uVar9 = uVar5;
      }
      uVar3 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + uVar4 + 1 & *(uint *)(param_1 + 0x1c));
      uVar7 = *(uint *)(lVar1 + 4 + uVar5 * 0xc);
      uVar4 = uVar3;
    } while ((uVar7 & 2) != 0);
    iVar8 = (int)uVar9;
joined_r0x004603f8:
    if (iVar8 == -1) goto LAB_0046038b;
  }
  puVar6 = (uint *)(lVar1 + uVar9 * 0xc + 4);
  if ((*(byte *)(lVar1 + 4 + uVar9 * 0xc) & 2) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (*puVar6 & 1);
  }
  *(int *)(lVar1 + uVar9 * 0xc) = *param_2;
  *(undefined4 *)(lVar1 + 8 + uVar9 * 0xc) = 0xffffffff;
  *puVar6 = param_3 * 4 + 3;
  in_EAX = *(int *)(param_1 + 0x18) + 1;
  *(uint *)(param_1 + 0x18) = in_EAX;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(ushort *)(param_1 + 0x12) < uVar4) {
    in_EAX = in_EAX * 8;
    if (*(uint *)(param_1 + 0x1c) < in_EAX) {
      bVar2 = alloc(param_1,(ulong)(*(uint *)(param_1 + 0x1c) - 8));
      return bVar2;
    }
  }
LAB_004603e7:
  return SUB41(in_EAX,0);
}


