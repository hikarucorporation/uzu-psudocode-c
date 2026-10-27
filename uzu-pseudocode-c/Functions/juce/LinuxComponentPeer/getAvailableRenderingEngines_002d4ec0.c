// Function : getAvailableRenderingEngines
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4ec0
// Prototype: LinuxComponentPeer * getAvailableRenderingEngines(LinuxComponentPeer * this)
// Body     : 002d4ec0 - 002d5014


/* juce::LinuxComponentPeer::getAvailableRenderingEngines() */

LinuxComponentPeer * __thiscall
juce::LinuxComponentPeer::getAvailableRenderingEngines(LinuxComponentPeer *this)

{
  void *pvVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  char **ppcVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  char *local_40;
  char *local_38;
  
  ppcVar6 = &local_40;
  pcVar11 = "Software Renderer";
  local_40 = "Software Renderer";
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = malloc(0x40);
  *(void **)this = pvVar1;
  *(undefined4 *)(this + 8) = 8;
  local_38 = (char *)0x0;
  while( true ) {
    *(int *)(this + 0xc) = (int)local_38 + 1;
    pbVar2 = &DAT_0061ac58;
    if ((byte *)pcVar11 != (byte *)0x0) {
      bVar5 = *pcVar11;
      pbVar2 = &DAT_0061ac58;
      if (bVar5 != 0) {
        pbVar7 = (byte *)(pcVar11 + 1);
        lVar9 = 0;
        pbVar2 = pbVar7;
        do {
          lVar8 = lVar9 + (ulong)(bVar5 >> 7);
          lVar9 = lVar8 + 1;
          bVar5 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (bVar5 != 0);
        uVar10 = lVar8 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002d4f74 to 002d4f78 has its CatchHandler @ 002d5015 */
        puVar3 = operator_new__(uVar10 + 0x17);
        LOCK();
        *puVar3 = 0;
        UNLOCK();
        *(ulong *)(puVar3 + 2) = uVar10;
        pbVar2 = (byte *)(puVar3 + 4);
        bVar5 = *pcVar11;
        pbVar4 = pbVar2;
        if (bVar5 != 0) {
          do {
            if ((char)bVar5 < '\0') {
              *pbVar4 = bVar5 >> 6 | 0xc0;
              pbVar4[1] = bVar5 & 0x3f | 0x80;
              pbVar4 = pbVar4 + 1;
            }
            else {
              *pbVar4 = bVar5;
            }
            pbVar4 = pbVar4 + 1;
            bVar5 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar5 != 0);
        }
        *pbVar4 = 0;
      }
    }
    *(byte **)((long)pvVar1 + (long)(int)local_38 * 8) = pbVar2;
    ppcVar6 = ppcVar6 + 1;
    if (ppcVar6 == &local_38) break;
    local_38 = (char *)(ulong)*(uint *)(this + 0xc);
    pvVar1 = *(void **)this;
    pcVar11 = *ppcVar6;
  }
  return this;
}


