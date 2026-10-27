// Function : del
// Namespace: hb_hashmap_t_unsigned_int_unsigned_int_true_
// Entry    : 00460420
// Prototype: undefined del(hb_hashmap_t<unsigned_int,unsigned_int,true> * this, int param_1)
// Body     : 00460420 - 00460494


/* hb_hashmap_t<unsigned int, unsigned int, true>::del(unsigned int const&) */

void __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::del
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this,int param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 != 0) {
    uVar3 = (ulong)(param_1 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(this + 0x20);
    uVar4 = *(uint *)(lVar1 + 4 + uVar3 * 0xc);
    if ((uVar4 & 2) != 0) {
      if (*(int *)(lVar1 + uVar3 * 0xc) != param_1) {
        iVar2 = 1;
        do {
          uVar3 = (ulong)((int)uVar3 + iVar2 & *(uint *)(this + 0x1c));
          uVar4 = *(uint *)(lVar1 + 4 + uVar3 * 0xc);
          if ((uVar4 & 2) == 0) {
            return;
          }
          iVar2 = iVar2 + 1;
        } while (*(int *)(lVar1 + uVar3 * 0xc) != param_1);
      }
      if ((uVar4 & 1) != 0) {
        *(uint *)(lVar1 + 4 + uVar3 * 0xc) = uVar4 & 0xfffffffe;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
      }
    }
  }
  return;
}


