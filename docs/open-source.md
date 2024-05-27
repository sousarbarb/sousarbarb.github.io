# Open-Source

## A Robotic Framework for the Robot@Factory 4.0 Competition

Robotic competitions stand as platforms to propel the forefront of robotics
research while nurturing STEM education, serving as hubs of both applied
research and scientific innovation. In Portugal, the
[Portuguese Robotics Open (FNR)](https://www.festivalnacionalrobotica.pt/) is an
event with several robotic competitions, including the Robot@Factory 4.0
competition. This competition presents an example of deploying autonomous robots
on a factory shop floor. Thus, this framework intended for the Robot@Factory 4.0
competition is modular and open-access, enabling future participants to use and
improve it in future editions. This work is the culmination of all the knowledge
acquired by the [5dpo Robotics Team](https://5dpo.github.io/) by winning the
2022 and 2023 editions of the competition.

Links:

- _GitHub:_ [5dpo/5dpo\_ratf\_2023](https://github.com/5dpo/5dpo_ratf_2023)
- _DOI:_ [10.1109/ICARSC61747.2024.10535935](https://doi.org/10.1109/ICARSC61747.2024.10535935)
- _Preprint:_
  [10.13140/RG.2.2.29701.77283](https://doi.org/10.13140/RG.2.2.29701.77283)

Citation:

> Sousa, R.B., Rocha, C.D., Martins, J.G., Costa, J.P., Padrão, J.T.,
> Sarmento, J.M., Carvalho, J.P., Lopes, M.S., Costa, P.G., & Moreira, A.P.
> (2024).
> _A Robotic Framework for the Robot@Factory 4.0 Competition_.
> In: 2024 IEEE International Conference on Autonomous Robot Systems and
> Competitions (ICARSC), pp. 66-73.
> DOI: [10.1109/ICARSC61747.2024.10535935](https://doi.org/10.1109/ICARSC61747.2024.10535935)

## Line Fitting-Based Corner-Like Detector for 2D Laser Scanners Data

The extraction of geometric information from the environment may be of interest
to localisation and mapping algorithms. This feature extraction algorithm is
intended to detect corner-like points in the 2D laser scan. The proposed
methodology defines arrival and departure neighbourhoods around each scan point
and performs local line fitting evaluated in multiple distance-based scales.
Then, a set of indicators based on line fitting error, the angle between arrival
and departure lines, and consecutive observation of the same keypoint across
different scales determine the existence of a corner-like feature. The
experiments evaluated the corner-like features regarding their relative position
and observability, achieving standard deviations on the relative position lower
than the sensor noise and visibility ratios higher than 75% with very low false
positives rates.

Links:

- _GitHub:_
  [mrdt/open-source/inesctec\_mrdt\_line\_fit\_based\_corner\_detector\_2d\_laser](https://gitlab.inesctec.pt/mrdt/open-source/inesctec_mrdt_line_fit_based_corner_detector_2d_laser)
- _DOI:_ [N/A](https://doi.org/)
- _Preprint:_
  [10.13140/RG.2.2.11269.32480](https://doi.org/10.13140/RG.2.2.11269.32480)

Citation:

> Sousa, R.B., Sobreira, H.M., Silva, M.F., & Moreira, A.P. (2024).
> _Line Fitting-Based Corner-Like Detector for 2D Laser Scanners Data_.
> In: 11th International Conference on Automation, Robotics, and Applications
> (ICARA), _in press_.
> DOI: [N/A](https://doi.org/)

## OptiOdom: A Generic Approach for Odometry Calibration of Wheeled Mobile Robots

Odometry calibration adjusts the kinematic parameters or directly the robot's
model to improve the wheeled odometry accuracy. The OptiOdom calibration
algorithm, generalises the odometry calibration problem. It is developed an
optimisation-based approach that uses the improved Resilient Propagation without
weight-backtracking (iRprop-) for estimating the kinematic parameters using only
the position data of the robot. Even though a calibration path is suggested to
be used in the calibration procedure, the OptiOdom method is not path-specific.
In the experiments performed, the OptiOdom was tested using four different
robots on a square, arbitrary, and suggested calibration paths. The OptiTrack
motion capture system was used as a ground-truth. Overall, the use of OptiOdom
led to improvements in the odometry accuracy (in terms of maximum distance and
absolute orientation errors over the path) over the existent literature while
being a generalised approach to the odometry calibration problem. The OptiOdom
and the methods from the literature implemented in the article are available in
GitHub as an open-source repository.

Links:

- _GitHub:_
  [sousarbarb/optiodom](https://github.com/sousarbarb/optiodom)
- _DOI:_
  [10.1007/s10846-022-01630-3](https://doi.org/10.1007/s10846-022-01630-3)
- _Preprint:_
  [10.13140/RG.2.2.22803.35364](https://doi.org/10.13140/RG.2.2.22803.35364)

Citation:

> Sousa, R.B., Petry, M.R., Costa, P.G., & Moreira, A.P. (2022).
> _OptiOdom: a Generic Approach for Odometry Calibration of Wheeled Mobile_
> _Robots_.
> Journal of Intelligent & Robotic Systems, **105**(39).
> DOI: [10.1007/s10846-022-01630-3](https://doi.org/10.1007/s10846-022-01630-3)
