## TinyTTA Engine

TinyTTA Engine is a lightweight framework for enabling Test-Time Adaptation (TTA) on edge devices like microcontrollers (MCUs). Built upon TFLM, it features:

- On-device backpropagation with floating-point computation
- Support for common DNN operators (ReLU, FullyConnected, Softmax, Maxpool, Avgpool, Conv, DepthwiseConv)
- Memory-efficient layer-wise update strategy with dynamic allocation
- Automatic differentiation for backward graph construction
- Graph optimization through operation fusion and quantization

The framework is specifically designed to operate within the resource constraints of edge devices while enabling model adaptation capabilities.

**Note**: Fully public release of the code is coming soon! Stay tuned for updates.

If you have any questions please email at hong.jia@unimelb.edu.au and ydk21@cam.ac.uk

If you find this code useful for your research, please consider citing the following papers:

```
@inproceedings{jia2024tinytta,
  title={TinyTTA: Efficient Test-time Adaptation via Early-exit Ensembles on Edge Devices},
  author={Jia, Hong and Kwon, Young and Orsino, Alessio and Dang, Ting and Talia, Domenico and Mascolo, Cecilia},
  booktitle={Advances in Neural Information Processing Systems (NeurIPS)},
  year={2024}
}

@inproceedings{jia2023ur2m,
  title={UR2M: Uncertainty and Resource-Aware Event Detection on Microcontrollers},
  author={Jia, Hong and Kwon, Young D. and Ma, Dong and Pham, Nhat and Qendro, Lorena and Vu, Tam and Mascolo, Cecilia},
  booktitle={2023 IEEE International Conference on Pervasive Computing and Communications (PerCom)},
  year={2023}

@inproceedings{kwon2023tinytrain,
  title={TinyTrain: Resource-Aware Task-Adaptive Sparse Training of DNNs at the Data-Scarce Edge},
  author={Kwon, Young D. and Li, Rui and Venieris, Stylianos I. and Chauhan, Jagmohan and Lane, Nicholas D. and Mascolo, Cecilia},
  booktitle={International Conference on Machine Learning (ICML)},
  year={2023}
}
}
```