# Curriculum Vitae

**Robotics Researcher | Autonomous Mobile Robots | Research to Industrial Deployment**

Robotics researcher who takes Simultaneous Localization and Mapping (SLAM)
algorithms and navigation stacks for Autonomous Mobile Robots (AMRs) from the
research prototype stage to the factory floor.
Creator of the RicoSLAM framework
([https://github.com/INESCTEC/ricoslam](https://github.com/INESCTEC/ricoslam)).
Deployment of SLAM algorithms and autonomous navigation stacks on-site at
5+ companies and several industrial sites.
Built research mobile robotic platforms and contributed to the
_IILABS 3D — iilab Indoor LiDAR-based SLAM_ dataset (DOI:
[10.1109/ACCESS.2025.3643753](https://doi.org/10.1109/ACCESS.2025.3643753)).
Author of 16 peer-reviewed publications (5 journal, 11 conference), including
a Best Paper Award.

---

## Experience

**[INESC TEC — Institute for Systems and Computer Engineering, Technology and Science](https://www.inesctec.pt/en/)**
(Porto, Portugal)

- **Researcher** (April 2023 — Present)
- **Graduate Research Scholarship** (September 2020 — March 2023)
- _Highlights:_
    - Created [RicoSLAM](https://github.com/INESCTEC/ricoslam),
      a graph SLAM framework for dynamic industrial
      environments ([PhD Thesis](https://github.com/sousarbarb/phd-thesis),
      [GreenAuto](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.01/2022.PC644867037-00000013/)
      project), built around a distance map-based tracking front-end and the
      [srrg2_solver](https://gitlab.com/sousarbarb_srrg-software/srrg_system)
      optimization back-end, with online/offline dynamics filtering through
      ray tracing, enabling AMRs to perform SLAM in highly dynamic, noisy
      environments while generating cleaner maps for autonomous operation
    - Deployed [RicoSLAM](https://github.com/INESCTEC/ricoslam) in a real-world
      container unloading use case ([MC Sonae](https://mc.sonae.pt/)), enabling
      the AMR to localize itself inside the container, not possible with the
      currently available open-source solutions
      ([ICARA 2026](https://doi.org/10.1109/ICARA69401.2026.11480416))
    - Deployed and tuned SLAM solutions
      ([Cartographer](https://google-cartographer-ros.readthedocs.io/en/latest/),
      [GMapping](https://github.com/sousarbarb/slam_gmapping),
      [RicoSLAM](https://github.com/INESCTEC/ricoslam),
      [SLAM Toolbox](https://github.com/SteveMacenski/slam_toolbox)) and
      INESC TEC's autonomous navigation stack at six industrial companies
      (Aumovio Advanced Antenna — former Continental Antenna,
      [CTT](https://www.ctt.pt/), [IDEPA](https://idepa.com/),
      [JPM Industry](https://jpm.pt/en/), [MC Sonae](https://mc.sonae.pt/), and
      [WFSCork](https://www.wfscork.com/)), improving mapping results and
      localization stability for autonomous AMR operation
    - Built the multimodal perception framework on the Hangfa Discovery Q2
      omnidirectional robots from scratch (3D modelling, electronics,
      firmware, network architecture, multimodal sensor integration, and ROS
      drivers) adopted by INESC TEC researchers across control, fleet
      management, pallet detection, and 2D/3D SLAM
      ([ICARSC 2025](https://doi.org/10.1109/ICARSC65809.2025.10970176))
    - Led the first national pilot of AMR teleoperation over 5G networks, in
      collaboration with [Flowbotic](https://www.flowbotic.eu/) and
      [NOS SGPS](https://www.nos.pt/en/institutional)
      ([ROBOT 2024](https://doi.org/10.1109/ROBOT61475.2024.10797434))
    - Co-created the IILABS 3D dataset (wheeled odometry, IMU, four 3D
      LiDARs, and millimeter-precision OptiTrack ground truth) and
      benchmarked 9 state-of-the-art LiDAR odometry/SLAM algorithms
      ([IEEE Access 2025](https://doi.org/10.1109/ACCESS.2025.3643753))
    - Developed a CANopen (CiA 402) motor driver, deployed on 10+ AMRs from
      [INESC TEC](https://www.inesctec.pt/en/) and
      [JPM Industry](https://jpm.pt/en/)
    - Contributed to a pallet and metallic box detection pipeline (RGB-D,
      YOLO ONNX in C++), enabling autonomous load handling in
      logistics and automotive use cases
      ([ROBOT 2024](https://doi.org/10.1109/ROBOT61475.2024.10797410))
    - Built a C++ Gerber file parser (recursive descent approach) for industrial
      printing-on-surfaces applications
      ([IEEE Access 2022](https://doi.org/10.1109/ACCESS.2022.3187042))
    - Contributed to four national projects
      ([5G & Digital Transformation Test Bed](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/03/C16-i02/2022.PC651590110-00000107/),
      [GreenAuto](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.01/2022.PC644867037-00000013/),
      [PRODUTECH R3](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/01/C05-i11/2024.PC645808870-00000067/),
      [VINCI 7D](https://transparencia.gov.pt/en/fundos-europeus/pt2020/beneficiarios-projetos/projeto/NORTE-01-0247-FEDER-045102/))
      with a total institutional financial impact of +5M€
- _Team Leader:_ Héber Miguel Sobreira, PhD
  ([heber.m.sobreira@inesctec.pt](mailto:heber.m.sobreira@inesctec.pt))

**Visiting Researcher @**
**[Sapienza Università di Roma](https://www.uniroma1.it/en/)**
(Rome, Italy)

- February 2024 — July 2024
- _Research Topics:_
    - Distance map-based point-to-point and point-to-plane registration,
      leveraging 1st- and 2nd-order derivatives of distance fields
    - Covariance estimation for registration approaches, derived from the
      approximated Hessian matrix of the Gauss-Newton solver and from the
      Unscented Transform
    - Design and evaluation of factor graph constraint formulations
      (pose and prior constraints, landmark observations, global bundle
      adjustment)
    - Integration of the registration formulations into the
      [srrg2_solver](https://gitlab.com/sousarbarb_srrg-software/srrg_system)
      factor graph framework, implementing custom SE(2) pose and registration
      constraints
    - Ray tracing approach to remove dynamic points from scan cloud data
      prior to registration
- _Supervisor:_ Prof. Dr. Giorgio Grisetti
  ([grisetti@diag.uniroma1.it](mailto:grisetti@diag.uniroma1.it))

**Invited Assistant @**
**[Faculty of Engineering, University of Porto (FEUP)](https://sigarra.up.pt/feup/en/)**
(Porto, Portugal)

- September 2021 — August 2023
- _Courses:_
    - Software Design (MSc in ECE) (2021/22 1ºS, 2022/23 1ºS)
    - Industrial Informatics (MSc in ECE) (2021/22 2ºS, 2022/23 2ºS)
- _Supervisors:_
    - Prof. Dr. Armando Jorge Sousa ([asousa@fe.up.pt](mailto:asousa@fe.up.pt))
    - Prof. Dr. Mário Jorge Sousa ([msousa@fe.up.pt](mailto:msousa@fe.up.pt))
    - Prof. Dr. Nuno Flores ([nflores@fe.up.pt](mailto:nflores@fe.up.pt))

**Clarinet Teacher @**
**[Escola de Música da Sociedade Filarmónica de Crestuma](https://www.facebook.com/escolademusica.sfc/)**
(Porto, Portugal)

- July 2017 — July 2021
- _Supervisor:_ Joana Oliveira
  ([joanaoliveira.flauta@gmail.com](mailto:joanaoliveira.flauta@gmail.com))

**Trainee Assistant @**
**[Faculty of Engineering, University of Porto (FEUP)](https://sigarra.up.pt/feup/en/)**
(Porto, Portugal)

- February 2021 — June 2021
- _Course:_ Industrial Robotics (MSc in ECE)
- _Teaching Topic:_ Multivariable Control
  (DOI: [10.13140/RG.2.2.27306.13761](http://dx.doi.org/10.13140/RG.2.2.27306.13761))
- _Supervisor:_ Prof. Dr. António Paulo Moreira
  ([amoreira@fe.up.pt](mailto:amoreira@fe.up.pt))

**Tutor @**
**[Faculty of Engineering, University of Porto (FEUP)](https://sigarra.up.pt/feup/en/)**
(Porto, Portugal)

- September 2019 — November 2019
- _Course:_ Project FEUP (BSc in ECE)

---

## Education

**PhD Candidate in ECE @**
**[Faculty of Engineering, University of Porto (FEUP)](https://sigarra.up.pt/feup/en/)**
(Porto, Portugal)

- February 2021 — Present
- _GPA:_ 18.40/20 (curricular courses)
- PhD Thesis: _RicoSLAM: Localization and Mapping in Dynamic Environments_
  (submitted June 2026)
- _Supervisors:_
    - Prof. Dr. António Paulo Moreira
      ([amoreira@fe.up.pt](mailto:amoreira@fe.up.pt))
    - Héber Miguel Sobreira, PhD
      ([heber.m.sobreira@inesctec.pt](mailto:heber.m.sobreira@inesctec.pt))

**MSc in ECE @**
**[Faculty of Engineering, University of Porto (FEUP)](https://sigarra.up.pt/feup/en/)**
(Porto, Portugal)

- September 2015 — July 2020
- _GPA:_ 18.20/20 (1st highest among the 149 students completing the ECE
  degree at FEUP in 2019/2020)
- MSc Thesis in Odometry and Extrinsic Sensor Calibration on Mobile Robots
  (DOI: [10.13140/RG.2.2.27052.28802](http://dx.doi.org/10.13140/RG.2.2.27052.28802))
- _Supervisors:_
    - Prof. Dr. António Paulo Moreira
      ([amoreira@fe.up.pt](mailto:amoreira@fe.up.pt))
    - Marcelo R. Petry, PhD
      ([marcelo.petry@inesctec.pt](mailto:marcelo.petry@inesctec.pt))

**Scientific-Technological Course in Industrial Electronics and Automation @**
**[Colégio de Gaia](https://www.colgaia.pt/)**
(Porto, Portugal)

- September 2012 — July 2015
- _GPA:_ 19.1/20.0
- Technological Final Project on an Automated Hydroponic in a
  Controlled-Environment Room

**Secondary Music Course in Clarinet @**
**[Fundação Conservatório Regional de Gaia](https://conservatoriodegaia.org/)**
(Porto, Portugal)

- September 2007 — July 2015
- _GPA:_ 16/20
- _Supervisors:_
    - [Tiago Abrantes](https://www.meloteca.com/portfolio-item/tiago-abrantes/)
      (7th and 8th year)
    - [Daniel Monteiro](https://www.meloteca.com/portfolio-item/daniel-monteiro/)
      (5th and 6th year)
    - Manuel Moura (4th year)
    - [João Moreira](https://www.meloteca.com/portfolio-item/joao-moreira-clarinete/)
      (3rd year)
    - [Nuno Pinto](https://www.meloteca.com/portfolio-item/nuno-pinto/)
      (1st and 2nd year)

---

## Skills

- **Programming:** C++, Python, MATLAB / Octave, SQL
- **Robotics & Middleware:** ROS 1 & ROS 2, Gazebo,
  srrg2_solver (factor graph SLAM)
- **Libraries:** Eigen, OpenCV, PCL, Boost, kacanopen
- **Methods:** Factor graph SLAM, EKF / UKF, point cloud registration
  (ICP, distance maps), sensor and odometry calibration
- **Tooling:** Git, GitHub Actions (CI/CD), CMake, GoogleTest, Docker,
  Bash, Linux
- **Writing:** LaTeX, Typst
- **Speaking:** Native Portuguese, Fluent English

---

## Projects

**5G & Digital Transformation Test Bed**

- November 2023 — Present
- _ID:_
  [03/C16-i02/2022.PC651590110-00000107](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/03/C16-i02/2022.PC651590110-00000107/)
- _Research Topics:_
  Remote Control of Mobile Robots over 5G Networks

**GreenAuto: Green innovation for the Automotive Industry**

- April 2023 - Present
- _ID:_
  [02/C05-i01.02/2022.PC644867037-00000013](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.01/2022.PC644867037-00000013/)
- _Research Topics:_
  Automatic Pallet Detection,
  Long-Term Localization and Mapping with Mobile Robots,
  Multi-Robot Coordination

**PRODUTECH R3 (Recovery-Resilience-Reindustrialisation): Production**
**Technologies Cluster Mobilising Agenda for Reindustrialisation**

- April 2023 - Present
- _ID:_
  [02/C05-i01.01/2022.PC645808870-00000067](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/01/C05-i11/2024.PC645808870-00000067/)
- _Research Topics:_
  Automatic Pallet Detection,
  Remote Control of Autonomous Forklift Robots

**VINCI 7D Functional Print**

- September 2020 - August 2021
- _ID:_
  [POCI-01-0247-FEDER-045102](https://transparencia.gov.pt/en/fundos-europeus/pt2020/beneficiarios-projetos/projeto/NORTE-01-0247-FEDER-045102/)
- _Research Topics:_
  Gerber File Parsers,
  2D-3D Projection of Electronic Circuits and Decorations

See more in [Projects](projects.md).

---

## Publications

5 journal articles and 11 conference papers in total.

Lopes, M.S., Cordeiro, A., Sousa, R.B., Beça, J.A., Costa, P.G., Souza, J.P.,
& Silva, M.F. (2026).
_CARGO: A Mobile Manipulator Solution for Container Unloading_.
In: 2026 12th International Conference on Automation, Robotics and
Applications (ICARA), pp. 274—279.
DOI: [10.1109/ICARA69401.2026.11480416](https://doi.org/10.1109/ICARA69401.2026.11480416)

Ribeiro, J.D., Sousa, R.B., Martins, J.G., Aguiar, A.S., Santos, F.N., &
Sobreira, H.M. (2025).
_Indoor Benchmark of 3D LiDAR SLAM at iilab - Industry and Innovation Laboratory_.
IEEE Access, **13**:212421—212442.
DOI: [10.1109/ACCESS.2025.3643753](https://doi.org/10.1109/ACCESS.2025.3643753)

Sousa, R.B., Sobreira, H.M., Martins, J.G., Costa, P.G., Silva, M.F., &
Moreira, A.P. (2025).
_Integrating Multimodal Perception into Ground Mobile Robots_.
In: 2025 IEEE International Conference on Autonomous Robot Systems and
Competitions (ICARSC), pp. 104—111.
DOI: [10.1109/ICARSC65809.2025.10970176](https://doi.org/10.1109/ICARSC65809.2025.10970176)

Sousa, R.B., Rocha, C.D., Martins, J.G., Costa, J.P., Padrão, J.T.,
Sarmento, J.M., Carvalho, J.P., Lopes, M.S., Costa, P.G., & Moreira, A.P. (2024).
_A Robotic Framework for the Robot@Factory 4.0 Competition_.
In: 2024 IEEE International Conference on Autonomous Robot Systems and
Competitions (ICARSC), pp. 66—73.
DOI: [10.1109/ICARSC61747.2024.10535935](https://doi.org/10.1109/ICARSC61747.2024.10535935)

Sousa, R.B., Sobreira, H.M., & Moreira, A.P. (2023).
_A systematic literature review on long-term localization and mapping for_
_mobile robots_.
Journal of Field Robotics, **40**(5):1245—1322.
DOI: [10.1002/rob.22170](https://doi.org/10.1002/rob.22170)

Sousa, R.B., Petry, M.R., Costa, P.G., & Moreira, A.P. (2022).
_OptiOdom: a Generic Approach for Odometry Calibration of Wheeled Mobile Robots_.
Journal of Intelligent & Robotic Systems, **105**(39).
DOI: [10.1007/s10846-022-01630-3](https://doi.org/10.1007/s10846-022-01630-3)

Sousa, R.B., Rocha, C.D., Mendonça, H.S., Moreira, A.P., & Silva, M.F. (2022).
_Gerber File Parsing for Conversion to Bitmap Image — The VINCI7D Case Study_.
IEEE Access, **10**:69659—69679.
DOI: [10.1109/ACCESS.2022.3187042](https://doi.org/10.1109/ACCESS.2022.3187042)

See more in [Publications](publications.md).

---

## Awards

Best Paper Award for the work
_A Robotic Framework for the Robot@Factory 4.0 Competition_
at the 2024 IEEE International Conference on Autonomous Robot Systems and
Competitions (ICARSC),
Paredes de Coura, Portugal, May 2024.

Best Presenter Award
in the Session Topic _Model-based System Design, Parameter Optimization, and_
_Data Measurement_ for the paper
_Line Fitting-Based Corner-Like Detector for 2D Laser Scanners Data_ at the
10th International Conference on Automation, Robotics, and Applications (ICARA),
Athens, Greece, February 2024.

1st and 2nd places at the
Robot@Factory 4.0 competition of the Portuguese Robotics Open (FNR) 2023,
Tomar, Portugal, May 2023.

1st place at the
Robot@Factory 4.0 competition of the Portuguese Robotics Open (FNR) 2022,
Santa Maria da Feira, Aveiro, Portugal, May 2022.

ABB 2020 Award relative to the
M.Sc. thesis with the best classification developed on one of the following
themes: Renewable Energies, Industrial Automation, or Robotics.

See more in [Awards](awards.md).
