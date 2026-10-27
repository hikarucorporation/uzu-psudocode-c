// Function : isDarkModeActive
// Namespace: juce:XWindowSystem
// Entry    : 001e00f0
// Prototype: ulong isDarkModeActive(XWindowSystem * this)
// Body     : 001e00f0 - 001e055c


/* WARNING: Type propagation algorithm not settling */
/* juce::XWindowSystem::isDarkModeActive() const */

ulong __thiscall juce::XWindowSystem::isDarkModeActive(XWindowSystem *this)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte bVar11;
  undefined8 extraout_RDX;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint *in_R8;
  ulong in_R9;
  undefined1 *puVar15;
  char *pcVar16;
  void *local_c8;
  undefined4 *local_c0;
  char *local_b8;
  stat64 local_b0;
  
  if (this == (XWindowSystem *)0x0) {
LAB_001e0275:
    local_c8 = (void *)0x0;
                    /* try { // try from 001e027d to 001e0286 has its CatchHandler @ 001e05da */
    puVar7 = operator_new__(0x2b);
    LOCK();
    *puVar7 = 0;
    UNLOCK();
    *(undefined8 *)(puVar7 + 2) = 0x14;
    uVar9 = s_0EGdk_WindowScalinExpected_____o_005dcbee._42_8_;
    local_c0 = puVar7 + 4;
    *(undefined8 *)(puVar7 + 4) = s_0EGdk_WindowScalinExpected_____o_005dcbee._34_8_;
    *(undefined8 *)(puVar7 + 6) = uVar9;
    *(undefined2 *)(puVar7 + 8) = 0x7367;
    *(undefined1 *)((long)puVar7 + 0x22) = 0;
                    /* try { // try from 001e02b4 to 001e02c2 has its CatchHandler @ 001e05ae */
    File::parseAbsolutePath((File *)&local_b8,(uint *)&local_c0,extraout_RDX,local_c0,in_R8,in_R9);
    pcVar16 = local_b8;
    if (((*local_b8 == '\0') || (iVar4 = access(local_b8,0), iVar4 != 0)) ||
       ((*pcVar16 != '\0' &&
        ((iVar4 = stat64(pcVar16,&local_b0), iVar4 == 0 && ((local_b0.st_mode & 0x4000) != 0)))))) {
      piVar5 = (int *)(pcVar16 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_c0 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar5);
        }
      }
LAB_001e04e1:
      local_b0.st_dev = (__dev_t)&DAT_0061ac58;
      pvVar3 = local_c8;
    }
    else {
                    /* try { // try from 001e034e to 001e0357 has its CatchHandler @ 001e057a */
      piVar5 = operator_new__(0x57);
      LOCK();
      *piVar5 = 0;
      UNLOCK();
      piVar5[2] = 0x40;
      piVar5[3] = 0;
      bVar11 = 0x2f;
      lVar8 = 2;
      pbVar12 = (byte *)(piVar5 + 4);
      do {
        if ((char)bVar11 < '\0') {
          *pbVar12 = bVar11 >> 6 | 0xc0;
          pbVar12[1] = bVar11 & 0x3f | 0x80;
          pbVar13 = pbVar12 + 1;
          pbVar14 = pbVar12 + 2;
          bVar11 = "Gdk/WindowScalingFactor"[lVar8 + 0x17];
          pbVar12 = pbVar13;
          if ((char)bVar11 < '\0') goto LAB_001e0390;
LAB_001e03f4:
          *pbVar14 = bVar11;
        }
        else {
          *pbVar12 = bVar11;
          pbVar14 = pbVar12 + 1;
          bVar11 = "Gdk/WindowScalingFactor"[lVar8 + 0x17];
          pbVar13 = pbVar12;
          if (-1 < (char)bVar11) goto LAB_001e03f4;
LAB_001e0390:
          pbVar13 = pbVar14;
          pbVar12[1] = bVar11 >> 6 | 0xc0;
          pbVar12[2] = bVar11 & 0x3f | 0x80;
        }
        pbVar12 = pbVar13 + 2;
        bVar11 = "/usr/bin/gsettings get org.gnome.desktop.interface gtk-theme"[lVar8];
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0x3e);
      *pbVar12 = 0;
                    /* try { // try from 001e03fb to 001e0407 has its CatchHandler @ 001e055f */
      uVar10 = ChildProcess::start((ChildProcess *)&local_c8,(byte *)(piVar5 + 4),1);
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar5);
      }
      piVar5 = (int *)(local_b8 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_c0 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar5);
        }
      }
      if ((char)uVar10 == '\0') goto LAB_001e04e1;
                    /* try { // try from 001e0466 to 001e0483 has its CatchHandler @ 001e055d */
      uVar10 = ChildProcess::waitForProcessToFinish((ChildProcess *)&local_c8,200);
      if ((char)uVar10 == '\0') goto LAB_001e04e1;
      ChildProcess::readAllProcessOutput((String *)&local_b0,&local_c8);
      pvVar3 = local_c8;
    }
    puVar7 = &emptyString;
    local_c8 = pvVar3;
    if (pvVar3 != (void *)0x0) {
      puVar7 = &emptyString;
      if (*(FILE **)((long)pvVar3 + 0x10) != (FILE *)0x0) {
        fclose(*(FILE **)((long)pvVar3 + 0x10));
      }
      if (*(int *)((long)pvVar3 + 4) != 0) {
                    /* try { // try from 001e050b to 001e050f has its CatchHandler @ 001e05a6 */
        close(*(int *)((long)pvVar3 + 4));
      }
      operator_delete(pvVar3);
      cVar2 = *(char *)local_b0.st_dev;
      pcVar16 = (char *)local_b0.st_dev;
      goto joined_r0x001e0495;
    }
  }
  else {
    piVar5 = operator_new__(0x27);
    LOCK();
    *piVar5 = 0;
    UNLOCK();
    piVar5[2] = 0x10;
    piVar5[3] = 0;
    piVar5[4] = 0x2f74654e;
    piVar5[5] = 0x6d656854;
    piVar5[6] = 0x6d614e65;
    *(undefined2 *)(piVar5 + 7) = 0x65;
    puVar6 = std::
             _Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
             ::find((_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                     *)(this + 0x20),(byte *)(piVar5 + 4));
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = (undefined4 *)0x3;
      pcVar16 = "";
      puVar15 = &DAT_0061ac58;
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 != 0) goto LAB_001e018d;
LAB_001e01b3:
      operator_delete__(piVar5);
      if ((int)puVar7 != 3) goto LAB_001e01c0;
LAB_001e0230:
      piVar5 = (int *)(pcVar16 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = (int *)(puVar15 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar5);
        }
      }
      goto LAB_001e0275;
    }
    puVar15 = (undefined1 *)puVar6[2];
    piVar1 = (int *)(puVar15 + -0x10);
    if (piVar1 != &emptyString) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar7 = (undefined4 *)(ulong)*(uint *)(puVar6 + 3);
    pcVar16 = (char *)puVar6[4];
    if (pcVar16 != "") {
      LOCK();
      *(int *)(pcVar16 + -0x10) = *(int *)(pcVar16 + -0x10) + 1;
      UNLOCK();
    }
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) goto LAB_001e01b3;
LAB_001e018d:
    if ((int)puVar7 == 3) goto LAB_001e0230;
LAB_001e01c0:
    if (*pcVar16 == '\0') goto LAB_001e0230;
    piVar5 = (int *)(pcVar16 + -0x10);
    local_b0.st_dev = (__dev_t)pcVar16;
    if (piVar5 != &emptyString) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar5);
      }
    }
    piVar5 = (int *)(puVar15 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar5);
        cVar2 = *(char *)local_b0.st_dev;
        pcVar16 = (char *)local_b0.st_dev;
        goto joined_r0x001e0495;
      }
    }
  }
  cVar2 = *(char *)local_b0.st_dev;
  pcVar16 = (char *)local_b0.st_dev;
joined_r0x001e0495:
  local_b0.st_dev = (__dev_t)pcVar16;
  if (cVar2 == '\0') {
    uVar10 = 0;
    if (pcVar16 + -0x10 == (char *)&emptyString) {
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x22] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x22];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x23] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x23];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x24] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x24];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x25] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x25];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x26] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x26];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x27] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x27];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x28] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x28];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x29] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x29];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2a] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2a];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2b] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2b];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2c] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2c];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2d] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2d];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2e] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2e];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2f] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x2f];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x30] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x30];
      s_0EGdk_WindowScalinExpected_____o_005dcbee[0x31] =
           s_0EGdk_WindowScalinExpected_____o_005dcbee[0x31];
      return 0;
    }
  }
  else {
    uVar9 = juce::String::containsIgnoreCase((String *)&local_b0,&DAT_005e31b1);
    uVar10 = CONCAT71((int7)((ulong)puVar7 >> 8),1);
    if ((char)uVar9 == '\0') {
      uVar10 = juce::String::containsIgnoreCase((String *)&local_b0,(byte *)"black");
      uVar10 = uVar10 & 0xffffffff;
    }
    if (pcVar16 + -0x10 == (char *)&emptyString) {
      return uVar10;
    }
  }
  piVar5 = (int *)(pcVar16 + -0x10);
  LOCK();
  iVar4 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar4 == 0) {
    operator_delete__(piVar5);
  }
  return uVar10;
}


