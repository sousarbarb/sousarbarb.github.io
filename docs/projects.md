# Projects

## GreenAuto: Green innovation for the Automotive Industry

_(ongoing)_

The GreenAuto agenda focused in transforming the national automotive sector of Portugal, in the scope of the current transition to low emission vehicles. The agenda intended to create the technical and operational conditions for [Peugeot Citroën Automóveis Portugal,  S.A.](https://www.stellantis.com/) to start the production of a new light commercial vehicle (LCV)  in Portugal, namely a battery electric light commercial vehicle (BE-LCV), with the collaboration of the agenda promotors, including industrial and research & innovation (R&I) entities.
The INESC TEC participation was in the work package 10 _Automated logistics for the automotive industry_, more specifically, in the Product, Processes, or Services (PPS) 18 - _3D navigation system for mobile robotic equipment_. This PPS's partners included [Flowbotic Mobile Systems, Lda](https://www.flowbotic.eu/), a company that designs and manufactures autonomous mobile robots.

My participation in this project has mainly been in researching new techniques to achieve long-term operation of autonomous mobile robots, including the topics of Simultaneous Localization and Mapping (SLAM) and automatic calibration of sensory systems. Furthermore, other contributions include application of 3D localization and mapping systems (working with LiDAR sensors such as RoboSense RS-HELIOS 5515 and Livox Mid-360) and project management.

Link: [https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.02/2022.PC644867037-00000013/](https://transparencia.gov.pt/en/fundos-europeus/prr/beneficiarios-projetos/projeto/02/C05-i01.02/2022.PC644867037-00000013/)

## VINCI 7D Functional Print

INESC TEC participated in this project through a contract celebrated with the company [Rui Azevedo - Soluções de Acabamentos e Tampografia](https://www.ruiazevedo.pt/pt).
The context of this project was the automotive industry. The VINCI 7D consortium intended to innovate in the industrial process of printing in three-dimensional parts, adopting more automatic and robotic mechanisms, and less dependent on manual processes and mechanical setups. In addition, it was intended to promote the implementation of a technology that allows the innovation of multi-ink printing parts, allowing the creation of sensors and actuators on its surface (e.g., having a car dash with components printed on its surface, instead of mounting and fixing them).

The main responsability of INESC TEC was the 2D to 3D projection of electronic circuits and/or decorations. The company [Rui Azevedo - Soluções de Acabamentos e Tampografia](https://www.ruiazevedo.pt/pt) established that all electronic circuits and/or decorations should be described by Gerber files (traditionally used in printed circuit boards' industry). Therefore, my main contribution for this project was the development of a Gerber parser compatible with the Gerber X2 standard to convert the text file into a bitmap image (DOI: [10.1109/ACCESS.2022.3187042](https://doi.org/10.1109/ACCESS.2022.3187042)). This parser implemented a recursive descendent approach to interpret the Gerber commands and, consequently, to generate the parsing tree. The bitmap generation leveraged from the drawing functions available in the OpenCV library.
Although the bitmap image could have been used for an inkjet approach to generate both the robotic manipulator trajectories and the pulses for the printing head, the company decided to prefer a plotter-like approach. This decision led to my smaller contribution of developing a second version of the parser to also consider the parametric definitions of the graphical contents described in the Gerber file, to allow the correct generation of the plotter-like trajectories.

Link: [https://www.inesctec.pt/en/projects/vinci7d](https://www.inesctec.pt/en/projects/vinci7d)
