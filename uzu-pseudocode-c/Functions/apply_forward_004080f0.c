// Function : apply_forward
// Namespace: 
// Entry    : 004080f0
// Prototype: undefined apply_forward(hb_ot_apply_context_t * param_1, ulong * param_2, int param_3)
// Body     : 004080f0 - 00408437


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* apply_forward(OT::hb_ot_apply_context_t*, OT::hb_ot_layout_lookup_accelerator_t const&, unsigned
   int) */

void __cdecl apply_forward(hb_ot_apply_context_t *param_1,ulong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  ulong *puVar11;
  void *__src;
  void *__dest;
  hb_buffer_t *this;
  char local_3c;
  
  uVar9 = (ulong)(uint)param_2[3];
  if (uVar9 == 0xffffffff) {
    local_3c = '\0';
    cVar6 = local_3c;
    local_3c = '\0';
    this = *(hb_buffer_t **)(param_1 + 0xa0);
    uVar7 = *(uint *)(this + 0x5c);
    if (*(uint *)(this + 0x60) <= uVar7) goto LAB_004083fb;
  }
  else {
    local_3c = (*(code *)param_2[uVar9 * 7 + 7])(param_2[uVar9 * 7 + 4],param_1,1);
    this = *(hb_buffer_t **)(param_1 + 0xa0);
    uVar7 = *(uint *)(this + 0x5c);
    cVar6 = local_3c;
    if (*(uint *)(this + 0x60) <= uVar7) goto LAB_004083fb;
  }
  local_3c = cVar6;
  do {
    uVar9 = (ulong)uVar7;
    if (this[0x58] == (hb_buffer_t)0x0) break;
    lVar5 = *(long *)(this + 0x70);
    uVar7 = *(uint *)(lVar5 + uVar9 * 0x14);
    if (((((*param_2 >> ((ulong)(uVar7 >> 4) & 0x3f) & 1) != 0) &&
         ((param_2[1] >> ((ulong)uVar7 & 0x3f) & 1) != 0)) &&
        ((param_2[2] >> ((ulong)(uVar7 >> 9) & 0x3f) & 1) != 0)) &&
       ((*(uint *)(lVar5 + 4 + uVar9 * 0x14) & *(uint *)(param_1 + 300)) != 0)) {
      uVar3 = *(ushort *)(lVar5 + 0xc + uVar9 * 0x14);
      if (((*(uint *)(param_1 + 0x134) & (uint)uVar3 & 0xe) == 0) &&
         (((uVar3 & 8) == 0 ||
          (uVar9 = OT::hb_ot_apply_context_t::match_properties_mark
                             (param_1,uVar7,(uint)uVar3,*(uint *)(param_1 + 0x134)),
          (char)uVar9 != '\0')))) {
        if (local_3c == '\0') {
          if (param_3 != 0) {
            puVar11 = param_2 + 10;
            iVar10 = param_3;
            do {
              uVar7 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x70) +
                               (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c) * 0x14);
              if ((((puVar11[-2] >> ((ulong)(uVar7 >> 4) & 0x3f) & 1) != 0) &&
                  ((puVar11[-1] >> ((ulong)uVar7 & 0x3f) & 1) != 0)) &&
                 (((*puVar11 >> ((ulong)(uVar7 >> 9) & 0x3f) & 1) != 0 &&
                  (cVar6 = (*(code *)puVar11[-5])(puVar11[-6],param_1), cVar6 != '\0'))))
              goto LAB_004082a5;
              puVar11 = puVar11 + 7;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else if (param_3 != 0) {
          puVar11 = param_2 + 10;
          iVar10 = param_3;
          do {
            uVar7 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x70) +
                             (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c) * 0x14);
            if (((((puVar11[-2] >> ((ulong)(uVar7 >> 4) & 0x3f) & 1) != 0) &&
                 ((puVar11[-1] >> ((ulong)uVar7 & 0x3f) & 1) != 0)) &&
                ((*puVar11 >> ((ulong)(uVar7 >> 9) & 0x3f) & 1) != 0)) &&
               (cVar6 = (*(code *)puVar11[-4])(puVar11[-6],param_1), cVar6 != '\0'))
            goto LAB_004082a5;
            puVar11 = puVar11 + 7;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
    }
    if (this[0x5a] == (hb_buffer_t)0x0) {
LAB_0040829f:
      *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
    }
    else {
      __dest = *(void **)(this + 0x78);
      __src = *(void **)(this + 0x70);
      iVar10 = *(int *)(this + 100);
      if ((__dest == __src) && (iVar10 == *(int *)(this + 0x5c))) {
LAB_00408297:
        *(int *)(this + 100) = iVar10 + 1;
        goto LAB_0040829f;
      }
      uVar7 = iVar10 + 1;
      if ((uVar7 == 0) || (uVar7 < *(uint *)(this + 0x68))) {
        if (__dest == __src) {
LAB_0040821f:
          uVar7 = *(uint *)(this + 100);
          if (*(int *)(this + 0x5c) + 1U < uVar7 + 1) {
            __dest = *(void **)(this + 0x80);
            *(void **)(this + 0x78) = __dest;
            if ((ulong)uVar7 != 0) {
              memcpy(__dest,__src,(ulong)uVar7 * 0x14);
              __src = *(void **)(this + 0x70);
              __dest = *(void **)(this + 0x78);
            }
          }
          else {
            __dest = __src;
          }
        }
LAB_00408270:
        uVar7 = *(uint *)(this + 0x5c);
        uVar4 = *(uint *)(this + 100);
        *(undefined4 *)((long)__dest + (ulong)uVar4 * 0x14 + 0x10) =
             *(undefined4 *)((long)__src + (ulong)uVar7 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((long)__src + (ulong)uVar7 * 0x14);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)((long)__dest + (ulong)uVar4 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        iVar10 = *(int *)(this + 100);
        goto LAB_00408297;
      }
      uVar8 = hb_buffer_t::enlarge(this,uVar7);
      if ((char)uVar8 != '\0') {
        __src = *(void **)(this + 0x70);
        __dest = *(void **)(this + 0x78);
        if (__dest == __src) goto LAB_0040821f;
        goto LAB_00408270;
      }
    }
LAB_004082a5:
    uVar7 = *(uint *)(this + 0x5c);
  } while (uVar7 < *(uint *)(this + 0x60));
LAB_004083fb:
  if (local_3c == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00408427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[(ulong)(uint)param_2[3] * 7 + 7])
            (param_2[(ulong)(uint)param_2[3] * 7 + 4],param_1,0);
  return;
}


