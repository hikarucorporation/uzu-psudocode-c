// Function : resolve_links
// Namespace: hb_serialize_context_t
// Entry    : 00438080
// Prototype: undefined resolve_links(hb_serialize_context_t * this)
// Body     : 00438080 - 00438249


/* hb_serialize_context_t::resolve_links() */

void __thiscall hb_serialize_context_t::resolve_links(hb_serialize_context_t *this)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  
  if (((*(int *)(this + 0x2c) == 0) &&
      (uVar9 = *(int *)(this + 0x54) - 1, *(int *)(this + 0x54) != 0)) && (uVar9 != 0)) {
    puVar15 = (undefined8 *)(*(long *)(this + 0x58) + 8);
    puVar1 = puVar15 + uVar9;
    do {
      plVar3 = (long *)*puVar15;
      uVar9 = *(uint *)((long)plVar3 + 0x14);
      if ((ulong)uVar9 != 0) {
        lVar4 = plVar3[3];
        lVar7 = 0;
        do {
          uVar2 = *(uint *)(lVar4 + 8 + lVar7);
          if (*(uint *)(this + 0x54) <= uVar2) {
            _hb_CrapPool = 0;
LAB_00438234:
            this[0x2c] = (hb_serialize_context_t)((byte)this[0x2c] | 1);
            return;
          }
          piVar5 = *(int **)(*(long *)(this + 0x58) + (ulong)uVar2 * 8);
          if (piVar5 == (int *)0x0) goto LAB_00438234;
          uVar2 = *(uint *)(lVar4 + lVar7);
          uVar14 = uVar2 >> 4 & 3;
          if (uVar14 == 2) {
            iVar12 = (*(int *)(this + 8) + *piVar5) - (*(int *)this + *(int *)(this + 0x10));
          }
          else if (uVar14 == 1) {
            iVar12 = *piVar5 - (int)plVar3[1];
          }
          else {
            iVar12 = 0;
            if (uVar14 == 0) {
              iVar12 = *piVar5 - (int)*plVar3;
            }
          }
          uVar13 = iVar12 - (uVar2 >> 6);
          uVar14 = uVar2 & 7;
          uVar8 = (ushort)uVar13;
          if ((uVar2 & 8) == 0) {
            if (uVar14 == 3) {
              lVar6 = *plVar3;
              uVar11 = (ulong)*(uint *)(lVar4 + 4 + lVar7);
              *(char *)(lVar6 + uVar11) = (char)(uVar13 >> 0x10);
              *(char *)(lVar6 + 1 + uVar11) = (char)(uVar13 >> 8);
              *(char *)(lVar6 + 2 + uVar11) = (char)uVar13;
              if (0xffffff < uVar13) goto LAB_004380f0;
            }
            else if (uVar14 == 4) {
              *(uint *)(*plVar3 + (ulong)*(uint *)(lVar4 + 4 + lVar7)) =
                   uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 * 0x1000000;
            }
            else {
              *(ushort *)(*plVar3 + (ulong)*(uint *)(lVar4 + 4 + lVar7)) = uVar8 << 8 | uVar8 >> 8;
              if (0xffff < uVar13) goto LAB_004380f0;
            }
          }
          else {
            uVar11 = (ulong)*(uint *)(lVar4 + 4 + lVar7);
            if (uVar14 == 4) {
              uVar10 = (ulong)(int)uVar13;
              *(uint *)(*plVar3 + uVar11) =
                   uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 * 0x1000000;
            }
            else {
              *(ushort *)(*plVar3 + uVar11) = uVar8 << 8 | uVar8 >> 8;
              uVar10 = (ulong)(short)uVar8;
            }
            if (uVar10 != uVar13) {
LAB_004380f0:
              this[0x2c] = (hb_serialize_context_t)((byte)this[0x2c] | 2);
            }
          }
          lVar7 = lVar7 + 0xc;
        } while ((ulong)uVar9 * 0xc != lVar7);
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1);
  }
  return;
}


