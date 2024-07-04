// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/motorcontrol/Talon.h>
class DriveSubsystem : public frc2::SubsystemBase {
 public:
  
  frc::Talon motorLeftTwo;
  frc::Talon motorRightOne;
  frc::Talon motorRightTwo;
  
  DriveSubsystem(int leftOneid, int leftTwoid, int rightOneid, int rightTwoid){
    frc::Talon motorLeftOne(leftOneid);

  }

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
