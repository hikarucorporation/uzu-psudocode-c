// Function : hb_script_get_horizontal_direction
// Namespace: 
// Entry    : 003ff0f0
// Prototype: undefined8 hb_script_get_horizontal_direction(int param_1)
// Body     : 003ff0f0 - 003ff37b


undefined8 hb_script_get_horizontal_direction(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (param_1 < 0x4e626174) {
    if (0x48756e66 < param_1) {
      if (0x4d616e68 < param_1) {
        if (param_1 < 0x4d657263) {
          if ((param_1 != 0x4d616e69) && (param_1 != 0x4d656e64)) {
            return 4;
          }
        }
        else if (((param_1 != 0x4d657263) && (param_1 != 0x4d65726f)) && (param_1 != 0x4e617262)) {
          return 4;
        }
        return uVar1;
      }
      if (param_1 < 0x4b686172) {
        if (param_1 == 0x48756e67) {
          return 0;
        }
        if (param_1 == 0x4974616c) {
          return 0;
        }
      }
      else {
        if (param_1 == 0x4b686172) {
          return uVar1;
        }
        if (param_1 == 0x4c796469) {
          return uVar1;
        }
        if (param_1 == 0x4d616e64) {
          return uVar1;
        }
      }
      return 4;
    }
    if (param_1 < 0x43687273) {
      if (0x41726d68 < param_1) {
        if (param_1 == 0x41726d69) {
          return uVar1;
        }
        if (param_1 == 0x41767374) {
          return uVar1;
        }
        return 4;
      }
      if (param_1 == 0x41646c6d) {
        return uVar1;
      }
      if (param_1 == 0x41726162) {
        return uVar1;
      }
      return 4;
    }
    if (param_1 < 0x456c796d) {
      if (param_1 == 0x43687273) {
        return uVar1;
      }
      if (param_1 == 0x43707274) {
        return uVar1;
      }
      return 4;
    }
    if (param_1 == 0x456c796d) {
      return uVar1;
    }
    if (param_1 == 0x48617472) {
      return uVar1;
    }
    if (param_1 == 0x48656272) {
      return uVar1;
    }
    return 4;
  }
  if (param_1 < 0x526f6867) {
    if (param_1 < 0x50616c6d) {
      if (0x4f726b67 < param_1) {
        if (param_1 == 0x4f726b68) {
          return uVar1;
        }
        if (param_1 == 0x4f756772) {
          return uVar1;
        }
        return 4;
      }
      if (param_1 == 0x4e626174) {
        return uVar1;
      }
      if (param_1 == 0x4e6b6f6f) {
        return uVar1;
      }
      return 4;
    }
    if (param_1 < 0x50686c70) {
      if (param_1 == 0x50616c6d) {
        return uVar1;
      }
      if (param_1 == 0x50686c69) {
        return uVar1;
      }
      return 4;
    }
    if (param_1 == 0x50686c70) {
      return uVar1;
    }
    if (param_1 == 0x50686e78) {
      return uVar1;
    }
    if (param_1 == 0x50727469) {
      return uVar1;
    }
    return 4;
  }
  if (0x536f676e < param_1) {
    if (param_1 < 0x54666e67) {
      if (param_1 == 0x536f676f) {
        return uVar1;
      }
      if (param_1 == 0x53797263) {
        return uVar1;
      }
      return 4;
    }
    if (param_1 == 0x59657a69) {
      return uVar1;
    }
    if (param_1 == 0x54686161) {
      return uVar1;
    }
    if (param_1 == 0x54666e67) {
      return 0;
    }
    return 4;
  }
  if (param_1 < 0x53616d72) {
    if (param_1 == 0x526f6867) {
      return uVar1;
    }
    if (param_1 == 0x52756e72) {
      return 0;
    }
    return 4;
  }
  if (param_1 == 0x53616d72) {
    return uVar1;
  }
  if (param_1 == 0x53617262) {
    return uVar1;
  }
  if (param_1 == 0x536f6764) {
    return uVar1;
  }
  return 4;
}


