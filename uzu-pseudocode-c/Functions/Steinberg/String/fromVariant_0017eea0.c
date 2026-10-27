// Function : fromVariant
// Namespace: Steinberg:String
// Entry    : 0017eea0
// Prototype: ulong fromVariant(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * this, uint * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0017eea0 - 0017f284


/* Steinberg::String::fromVariant(Steinberg::FVariant const&) */

ulong __thiscall
Steinberg::String::fromVariant
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,String *this,
          uint *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  short *psVar1;
  String SVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  void *pvVar9;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 unaff_R12;
  undefined7 uVar16;
  double dVar17;
  undefined1 in_stack_ffffffffffffffc8;
  long *local_30;
  uint switchD_0017eed0::switchdataD_005d9f80;
  
  uVar12 = *param_10;
  uVar11 = (uVar12 & 0xffffffef) - 1;
  if ((ushort)uVar11 < 0x20) {
    uVar11 = uVar11 & 0xffff;
    lVar13 = (long)&switchD_0017eed0::switchdataD_005d9f80 +
             (long)(int)(&switchD_0017eed0::switchdataD_005d9f80)[uVar11];
    uVar16 = (undefined7)((ulong)unaff_R12 >> 8);
    switch(uVar11) {
    case 0:
      if ((uVar12 & 1) == 0) {
        uVar8 = 0;
        SVar2 = this[0x13];
      }
      else {
        uVar8 = *(undefined8 *)(param_10 + 2);
        SVar2 = this[0x13];
      }
      if (((byte)SVar2 & 0x40) == 0) {
        printf(param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this,"%lld",uVar8,
               lVar13,param_13,param_14,in_stack_ffffffffffffffc8);
        uVar14 = CONCAT71(uVar16,1);
      }
      else {
        printf(param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this,0x5dbfa4,
               uVar8,lVar13,param_13,param_14,in_stack_ffffffffffffffc8);
        uVar14 = CONCAT71(uVar16,1);
      }
      break;
    case 1:
      dVar17 = 0.0;
      if ((uVar12 & 2) != 0) {
        dVar17 = *(double *)(param_10 + 2);
      }
      printFloat(dVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this,6,
                 &switchD_0017eed0::switchdataD_005d9f80,lVar13,param_13,param_14);
      uVar14 = CONCAT71(uVar16,1);
      break;
    default:
      goto switchD_0017eed0_caseD_2;
    case 3:
      if ((uVar12 & 4) == 0) {
        pcVar7 = (char *)0x0;
        uVar14 = CONCAT71(uVar16,1);
        if (*(long *)(this + 8) == 0) break;
      }
      else {
        pcVar7 = *(char **)(param_10 + 2);
        uVar14 = CONCAT71(uVar16,1);
        if (*(char **)(this + 8) == pcVar7) break;
      }
      uVar14 = CONCAT71(uVar16,1);
      if (pcVar7 == (char *)0x0) {
        uVar12 = 0;
      }
      else {
        sVar10 = strlen(pcVar7);
        uVar12 = (uint)sVar10;
      }
      uVar8 = resize(this,uVar12,0,'\0');
      if ((char)uVar8 != '\0') {
        if (((pcVar7 != (char *)0x0) && (0 < (int)uVar12)) && (*(void **)(this + 8) != (void *)0x0))
        {
          memcpy(*(void **)(this + 8),pcVar7,(ulong)uVar12);
        }
        *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | uVar12 & 0x3fffffff;
      }
      break;
    case 7:
      puVar3 = *(undefined8 **)(param_10 + 2);
      local_30 = (long *)0x0;
                    /* try { // try from 0017efb8 to 0017efc5 has its CatchHandler @ 0017f2c8 */
      if ((((uVar12 & 8) == 0) || (puVar3 == (undefined8 *)0x0)) ||
         ((iVar6 = (**(code **)*puVar3)(puVar3,0x71aa60,&local_30), plVar4 = local_30, iVar6 != 0 ||
          (local_30 == (long *)0x0)))) {
        uVar14 = CONCAT71(uVar16,1);
        break;
      }
                    /* try { // try from 0017f15f to 0017f164 has its CatchHandler @ 0017f295 */
      (**(code **)(*local_30 + 8))(local_30);
      if (local_30 != (long *)0x0) {
                    /* try { // try from 0017f172 to 0017f174 has its CatchHandler @ 0017f285 */
        (**(code **)(*local_30 + 0x10))();
      }
                    /* try { // try from 0017f178 to 0017f18a has its CatchHandler @ 0017f2b2 */
      cVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (cVar5 == '\0') {
                    /* try { // try from 0017f203 to 0017f208 has its CatchHandler @ 0017f2b2 */
        pcVar7 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4);
        if (*(char **)(this + 8) != pcVar7) {
          if (pcVar7 == (char *)0x0) {
            uVar12 = 0;
          }
          else {
            sVar10 = strlen(pcVar7);
            uVar12 = (uint)sVar10;
          }
          uVar8 = resize(this,uVar12,0,'\0');
          if ((char)uVar8 != '\0') {
            if (((pcVar7 != (char *)0x0) && (0 < (int)uVar12)) &&
               (*(void **)(this + 8) != (void *)0x0)) {
              memcpy(*(void **)(this + 8),pcVar7,(ulong)uVar12);
            }
            uVar12 = *(uint *)(this + 0x10) & 0x80000000 | uVar12 & 0x3fffffff;
            goto LAB_0017f265;
          }
        }
      }
      else {
        pvVar9 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4);
        if (*(void **)(this + 8) != pvVar9) {
          uVar14 = 0;
          uVar12 = 0;
          if (pvVar9 != (void *)0x0) {
            do {
              psVar1 = (short *)((long)pvVar9 + uVar14);
              uVar14 = uVar14 + 2;
            } while (*psVar1 != 0);
            uVar12 = (int)(uVar14 >> 1) - 1;
          }
          uVar8 = resize(this,uVar12,1,'\0');
          if ((char)uVar8 != '\0') {
            if (((pvVar9 != (void *)0x0) && (0 < (int)uVar12)) &&
               (*(void **)(this + 8) != (void *)0x0)) {
              memcpy(*(void **)(this + 8),pvVar9,(ulong)uVar12 * 2);
            }
            uVar12 = (*(uint *)(this + 0x10) & 0x80000000) + (uVar12 & 0x3fffffff) + 0x40000000;
LAB_0017f265:
            *(uint *)(this + 0x10) = uVar12;
          }
        }
      }
      uVar14 = CONCAT71(uVar16,1);
                    /* try { // try from 0017f26f to 0017f274 has its CatchHandler @ 0017f28d */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      break;
    case 0x1f:
      if ((uVar12 & 0x20) == 0) {
        pvVar9 = (void *)0x0;
        uVar14 = CONCAT71(uVar16,1);
        if (*(long *)(this + 8) == 0) break;
      }
      else {
        pvVar9 = *(void **)(param_10 + 2);
        uVar14 = CONCAT71(uVar16,1);
        if (*(void **)(this + 8) == pvVar9) break;
      }
      uVar14 = CONCAT71(uVar16,1);
      uVar15 = 0;
      uVar12 = 0;
      if (pvVar9 != (void *)0x0) {
        do {
          psVar1 = (short *)((long)pvVar9 + uVar15);
          uVar15 = uVar15 + 2;
        } while (*psVar1 != 0);
        uVar12 = (int)(uVar15 >> 1) - 1;
      }
      uVar8 = resize(this,uVar12,1,'\0');
      if ((char)uVar8 != '\0') {
        if (((pvVar9 != (void *)0x0) && (0 < (int)uVar12)) && (*(void **)(this + 8) != (void *)0x0))
        {
          memcpy(*(void **)(this + 8),pvVar9,(ulong)uVar12 * 2);
        }
        *(uint *)(this + 0x10) =
             (*(uint *)(this + 0x10) & 0x80000000) + (uVar12 & 0x3fffffff) + 0x40000000;
      }
    }
  }
  else {
switchD_0017eed0_caseD_2:
    uVar14 = 0;
    if ((*(long *)(this + 8) != 0) && ((*(uint *)(this + 0x10) & 0x3fffffff) != 0)) {
      resize(this,0,*(uint *)(this + 0x10) >> 0x1e & 1,'\0');
      if (((byte)this[0x13] & 0x40) == 0) {
        pcVar7 = (char *)(**(code **)(*(long *)this + 0x18))(this);
        uVar12 = 0xffffffff;
        do {
          uVar12 = uVar12 + 1;
          cVar5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
      }
      else {
        lVar13 = (**(code **)(*(long *)this + 0x20))(this);
        uVar14 = 0;
        do {
          psVar1 = (short *)(lVar13 + uVar14);
          uVar14 = uVar14 + 2;
        } while (*psVar1 != 0);
        uVar12 = ((uint)(uVar14 >> 1) & 0x7fffffff) + 0x3fffffff;
      }
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar12 & 0x3fffffff;
      uVar14 = 0;
    }
  }
  return uVar14 & 0xffffffff;
}


