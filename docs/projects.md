# Projects

## 5G & Digital Transformation Test Bed

_(ongoing)_

The 5G & Digital Transformation Test Bed is constituted by a consortium composed
of [NOS](https://www.nos.pt/en/business/welcome),
[Centro Hospitalar Universitário São João (CHUSJ)](https://portal-chsj.min-saude.pt/),
and [SONAE MC](https://mc.sonae.pt/), with
[INESC TEC](https://inesctec.pt/en), [4LifeLab](https://4lifelab.eu/),
[CEiiA](https://www.ceiia.com/) and
[Ericsson](https://www.ericsson.com/en/about-us/company-facts/ericsson-worldwide/portugal)
as partners. This test bed aimed to the acceleration of the country's digital
transition process and 5G adoption, bringing verticals closer to the new mobile
network.
As a partner, [INESC TEC](https://inesctec.pt/en) was responsible for launching
pilot initiatives that demonstrated the capabilities of the adoption of 5G
networks.

My participation was in the development of an MQTT-ROS bridge that allows the
remote control of Autonomous Mobile Robots (AMR). This participation included
also the supervision on the contributions of the tele-control system of AMRs
over 5G networks.

Link:
[https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/03/C16-i02/2022.PC651590110-00000107/](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/03/C16-i02/2022.PC651590110-00000107/)

## GreenAuto: Green innovation for the Automotive Industry

_(ongoing)_

The GreenAuto agenda focused in transforming the national automotive sector of
Portugal, in the scope of the current transition to low emission vehicles.
The agenda intended to create the technical and operational conditions for
[Peugeot Citroën Automóveis Portugal,  S.A.](https://www.stellantis.com/) to
start the production of a new light commercial vehicle (LCV)  in Portugal,
namely a battery electric light commercial vehicle (BE-LCV), with the
collaboration of the agenda promotors, including industrial and
Research & Innovation (R&I) entities.
The [INESC TEC](https://inesctec.pt/en) participation was in the scope of the
Work Package (WP) 10 _Automated logistics for the automotive industry_, more
specifically, in the Product, Processes, or Services (PPS) 18 -
_3D navigation system for mobile robotic equipment_.
This PPS's partners included
[Flowbotic Mobile Systems, Lda](https://www.flowbotic.eu/), a company that
designs and manufactures autonomous mobile robots.

My participation in this project has mainly been in researching new techniques
to achieve long-term operation of autonomous mobile robots, including the topics
of Simultaneous Localisation and Mapping (SLAM) and automatic calibration of
sensory systems.
Furthermore, other contributions include application of 3D localization and
mapping systems (working with LiDAR sensors such as RoboSense RS-HELIOS 5515 and
Livox Mid-360) and project management.
Lastly, my participation also included the supervision of the R&D work on
automatic pallet and mettalic boxes detection.

Link:
[https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.02/2022.PC644867037-00000013/](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.02/2022.PC644867037-00000013/)

## PRODUTECH R3 (Recovery-Resilience-Reindustrialisation): Production Technologies Cluster Mobilising Agenda for Reindustrialisation

_(ongoing)_

The PRODUTECH R3 agenda aimed to reduce the external dependence on technologies
and solutions for productive systems in the Portugal's production sector, in
order to retain in the country an increasing share of the added value generated
by the production value chains.
Consequently, [AIMMAP](https://www.metalportugal.pt/) and the
[PRODUTECH Cluster](http://www.produtech.org/) launched a comprehensive set of
projects and initiatives aimed to develop the production sector and,
simultaneously, contribute to the Produgal's national industry.
Several R&D centres from [INESC TEC](https://inesctec.pt/en) participated in the
project. The
[CRIIS - Centre for Robotics in Industry and Intelligent Systems](https://www.inesctec.pt/en/centres/criis)
participated in the Work Packages (WP) 6,
_FlexibleRoboticSolutions - Intelligent, Compact and Flexible End of Line_
_Robotic Solutions_, and 9,
_SmartIL - Intelligent interoperable robotic intralogistics and quality control_
_platform and solutions for industry_.
These WPs resulted on the demonstration of the R&D results in several
Product, Processes, or Services (PPS), including the collaboration the main
industrial partner [JPM Industry](https://jpm.pt/) responsible for the
development of the robotic intralogistics solutions.

My participation in this project included the development of a CANopen driver,
leveraging the existing library
[kacanopen](https://github.com/KITmedical/kacanopen) to communicate with the
drivers of the motors (wheel velocity control for differential robots, position
reference for trycicle robots and forklifts).
Additionally, my participation also included the supervision of the R&D work on
remote control of Autonomous Mobile Robots (AMR), considering both 5G and Wi-Fi
network configurations, and automatic pallet detection for autonomous forklifts.

Link:
[https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.01/2022.PC645808870-00000067/](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.01/2022.PC645808870-00000067/)

## VINCI 7D Functional Print

_(September 2020 - August 2021)_

INESC TEC participated in this project through a contract celebrated with the company [Rui Azevedo - Soluções de Acabamentos e Tampografia](https://www.ruiazevedo.pt/pt).
The context of this project was the automotive industry. The VINCI 7D consortium intended to innovate in the industrial process of printing in three-dimensional parts, adopting more automatic and robotic mechanisms, and less dependent on manual processes and mechanical setups. In addition, it was intended to promote the implementation of a technology that allows the innovation of multi-ink printing parts, allowing the creation of sensors and actuators on its surface (e.g., having a car dash with components printed on its surface, instead of mounting and fixing them).

The main responsability of INESC TEC was the 2D to 3D projection of electronic circuits and/or decorations. The company [Rui Azevedo - Soluções de Acabamentos e Tampografia](https://www.ruiazevedo.pt/pt) established that all electronic circuits and/or decorations should be described by Gerber files (traditionally used in printed circuit boards' industry). Therefore, my main contribution for this project was the development of a Gerber parser compatible with the Gerber X2 standard to convert the text file into a bitmap image (DOI: [10.1109/ACCESS.2022.3187042](https://doi.org/10.1109/ACCESS.2022.3187042)). This parser implemented a recursive descendent approach to interpret the Gerber commands and, consequently, to generate the parsing tree. The bitmap generation leveraged from the drawing functions available in the OpenCV library.
Although the bitmap image could have been used for an inkjet approach to generate both the robotic manipulator trajectories and the pulses for the printing head, the company decided to prefer a plotter-like approach. This decision led to my smaller contribution of developing a second version of the parser to also consider the parametric definitions of the graphical contents described in the Gerber file, to allow the correct generation of the plotter-like trajectories.

Link:
[https://www.inesctec.pt/en/projects/vinci7d](https://www.inesctec.pt/en/projects/vinci7d)
