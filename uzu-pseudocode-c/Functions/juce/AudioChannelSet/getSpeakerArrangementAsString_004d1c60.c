// Function : getSpeakerArrangementAsString
// Namespace: juce:AudioChannelSet
// Entry    : 004d1c60
// Prototype: undefined getSpeakerArrangementAsString(long * param_1, long * param_2)
// Body     : 004d1c60 - 004d309a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioChannelSet::getSpeakerArrangementAsString() const */

void __cdecl juce::AudioChannelSet::getSpeakerArrangementAsString(long *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  char *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  void *local_78;
  undefined8 uStack_70;
  long *local_68;
  char *local_60 [4];
  byte local_3a [10];
  
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar5 = (long *)*param_2;
  if ((long *)*param_2 == (long *)0x0) {
    plVar5 = param_2 + 1;
  }
  piVar12 = (int *)0x0;
  if (-1 < (int)param_2[4]) {
    uVar9 = 0;
    do {
      if ((*(uint *)((long)plVar5 + (long)((int)uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
        uVar4 = 0;
        if (-1 < (int)uVar9) {
          piVar12 = (int *)0x0;
          uVar13 = 0;
          local_68 = param_1;
          goto LAB_004d1cd1;
        }
        piVar12 = (int *)0x0;
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)param_2[4] + 1U != uVar9);
  }
  goto LAB_004d301a;
LAB_004d1cd1:
  uVar1 = uVar13 + 1;
  if (((long)(int)uVar4 <= (long)uVar13) &&
     (uVar15 = ((uint)(uVar1 >> 1) & 0x7fffffff) + (int)uVar13 + 9 & 0xfffffff8, uVar4 != uVar15)) {
    if ((int)uVar15 < 1) {
      free(piVar12);
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = realloc(piVar12,(ulong)uVar15 << 2);
    }
    uVar4 = uVar15;
  }
  piVar12[uVar13] = uVar9;
  plVar5 = (long *)*param_2;
  if ((long *)*param_2 == (long *)0x0) {
    plVar5 = param_2 + 1;
  }
  if ((int)*(uint *)(param_2 + 4) <= (int)uVar9) goto LAB_004d1d6f;
  while (uVar9 = uVar9 + 1,
        (*(uint *)((long)plVar5 + (long)((int)uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0) {
    if (uVar9 == *(uint *)(param_2 + 4)) goto LAB_004d1d6f;
  }
  uVar13 = uVar1;
  if ((int)uVar9 < 0) goto LAB_004d1d6f;
  goto LAB_004d1cd1;
LAB_004d1d6f:
  if ((int)uVar1 != 0) {
    piVar14 = piVar12;
    do {
      iVar2 = *piVar14;
      if (0x7f < iVar2) {
        local_3a[1] = 0;
        lVar8 = 0;
        uVar9 = iVar2 - 0x7f;
        do {
          lVar10 = lVar8;
          local_3a[lVar10] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
          bVar3 = 9 < uVar9;
          lVar8 = lVar10 + -1;
          uVar9 = uVar9 / 10;
        } while (bVar3);
                    /* try { // try from 004d1df4 to 004d2fea has its CatchHandler @ 004d30a0 */
        pcVar6 = (char *)StringHolderUtils::createFromFixedLength(local_3a + lVar10,-(lVar10 + -1));
        goto switchD_004d1e91_default;
      }
      pcVar6 = "";
      switch(iVar2) {
      case 1:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x4c;
        goto LAB_004d1e01;
      case 2:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x52;
        goto LAB_004d1e01;
      case 3:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x43;
        goto LAB_004d1e01;
      case 4:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x65664c;
        break;
      case 5:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x734c;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 6:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x7352;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 7:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x634c;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 8:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x6352;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 9:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x7343;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 10:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x73734c;
        break;
      case 0xb:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x737352;
        break;
      case 0xc:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x6d54;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 0xd:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x6c6654;
        break;
      case 0xe:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x636654;
        break;
      case 0xf:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x726654;
        break;
      case 0x10:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x6c7254;
        break;
      case 0x11:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x637254;
        break;
      case 0x12:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x727254;
        break;
      case 0x13:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x3265664c;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x14:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x73724c;
        break;
      case 0x15:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x737252;
        break;
      case 0x16:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x6c57;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 0x17:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x7257;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 0x18:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x304e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x19:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x1a:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x1b:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x1c:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x6c7354;
        break;
      case 0x1d:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x727354;
        break;
      case 0x1e:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x1f:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x20:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x364e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x21:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x374e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x22:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x384e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x23:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x394e4341;
        *(undefined1 *)(puVar7 + 5) = 0;
        break;
      case 0x24:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x30;
        break;
      case 0x25:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x31;
        break;
      case 0x26:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x32;
        break;
      case 0x27:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x33;
        break;
      case 0x28:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x34;
        break;
      case 0x29:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x35;
        break;
      case 0x2a:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x36;
        break;
      case 0x2b:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x37;
        break;
      case 0x2c:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x38;
        break;
      case 0x2d:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x314e4341;
        *(undefined2 *)(puVar7 + 5) = 0x39;
        break;
      case 0x2e:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x30;
        break;
      case 0x2f:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x31;
        break;
      case 0x30:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x32;
        break;
      case 0x31:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x33;
        break;
      case 0x32:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x34;
        break;
      case 0x33:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x35;
        break;
      case 0x34:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x36;
        break;
      case 0x35:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x37;
        break;
      case 0x36:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x38;
        break;
      case 0x37:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x324e4341;
        *(undefined2 *)(puVar7 + 5) = 0x39;
        break;
      case 0x38:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x30;
        break;
      case 0x39:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x31;
        break;
      case 0x3a:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x32;
        break;
      case 0x3b:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x33;
        break;
      case 0x3c:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x34;
        break;
      case 0x3d:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x35;
        break;
      case 0x3e:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x6c6642;
        break;
      case 0x3f:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x636642;
        break;
      case 0x40:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x726642;
        break;
      case 0x41:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x6c50;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 0x42:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        *(undefined2 *)(puVar7 + 4) = 0x7250;
        *(undefined1 *)((long)puVar7 + 0x12) = 0;
        goto LAB_004d1e01;
      case 0x43:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x6c7342;
        break;
      case 0x44:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x727342;
        break;
      case 0x45:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x6c7242;
        break;
      case 0x46:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x637242;
        break;
      case 0x47:
        puVar7 = operator_new__(0x1b);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 4;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x727242;
        break;
      case 0x48:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x36;
        break;
      case 0x49:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x37;
        break;
      case 0x4a:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x38;
        break;
      case 0x4b:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x334e4341;
        *(undefined2 *)(puVar7 + 5) = 0x39;
        break;
      case 0x4c:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x30;
        break;
      case 0x4d:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x31;
        break;
      case 0x4e:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x32;
        break;
      case 0x4f:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x33;
        break;
      case 0x50:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x34;
        break;
      case 0x51:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x35;
        break;
      case 0x52:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x36;
        break;
      case 0x53:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x37;
        break;
      case 0x54:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x38;
        break;
      case 0x55:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x344e4341;
        *(undefined2 *)(puVar7 + 5) = 0x39;
        break;
      case 0x56:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x30;
        break;
      case 0x57:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x31;
        break;
      case 0x58:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x32;
        break;
      case 0x59:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x33;
        break;
      case 0x5a:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x34;
        break;
      case 0x5b:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x35;
        break;
      case 0x5c:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x36;
        break;
      case 0x5d:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x37;
        break;
      case 0x5e:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x38;
        break;
      case 0x5f:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x354e4341;
        *(undefined2 *)(puVar7 + 5) = 0x39;
        break;
      case 0x60:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x364e4341;
        *(undefined2 *)(puVar7 + 5) = 0x30;
        break;
      case 0x61:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x364e4341;
        *(undefined2 *)(puVar7 + 5) = 0x31;
        break;
      case 0x62:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x364e4341;
        *(undefined2 *)(puVar7 + 5) = 0x32;
        break;
      case 99:
        puVar7 = operator_new__(0x1f);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(undefined8 *)(puVar7 + 2) = 8;
        pcVar6 = (char *)(puVar7 + 4);
        puVar7[4] = 0x364e4341;
        *(undefined2 *)(puVar7 + 5) = 0x33;
      }
switchD_004d1e91_default:
      if (*pcVar6 == '\0') {
LAB_004d1e3f:
        piVar11 = (int *)(pcVar6 + -0x10);
        if (piVar11 != &emptyString) {
LAB_004d1e4c:
          LOCK();
          iVar2 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar11);
          }
        }
      }
      else {
LAB_004d1e01:
        piVar11 = (int *)(pcVar6 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          *piVar11 = *piVar11 + 1;
          UNLOCK();
        }
        local_60[0] = pcVar6;
        StringArray::add((StringArray *)&local_78,local_60);
        piVar11 = (int *)(local_60[0] + -0x10);
        if (piVar11 == &emptyString) goto LAB_004d1e3f;
        LOCK();
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar2 != 0) goto LAB_004d1e3f;
        operator_delete__(piVar11);
        piVar11 = (int *)(pcVar6 + -0x10);
        if (piVar11 != &emptyString) goto LAB_004d1e4c;
      }
      piVar14 = piVar14 + 1;
    } while (piVar14 != piVar12 + (int)uVar1);
  }
  param_1 = local_68;
LAB_004d301a:
  free(piVar12);
                    /* try { // try from 004d3022 to 004d3033 has its CatchHandler @ 004d309b */
  StringArray::joinIntoString(param_1,(long *)&local_78," ");
  if (0 < uStack_70._4_4_) {
    lVar8 = 0;
    do {
      piVar12 = (int *)(*(long *)((long)local_78 + lVar8 * 8) + -0x10);
      if (piVar12 != &emptyString) {
        LOCK();
        iVar2 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar12);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_70._4_4_);
  }
  free(local_78);
  return;
}


