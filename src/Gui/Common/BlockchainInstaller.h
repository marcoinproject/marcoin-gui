/*
 * Copyright (c) 2018, The Marcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Marcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QDir>
#include <QFileInfo>
#include <QObject>

namespace WalletGui {

class BlockchainInstaller : public QObject {
  Q_OBJECT

public:
  explicit BlockchainInstaller(QObject* _parent);
  ~BlockchainInstaller();

  void exec();

private:
  const QString m_blockIndexesFileName;
  const QString m_blocksFileName;
  const QDir m_marcoinDir;
  const QDir m_applicationDir;

  bool checkIfCurrentBlockchainExists() const;
  bool checkIfMarcoinBlockchainExists() const;
  bool getGenesisBlockFromBlockchain(char** _genesisBlockData) const;
  bool checkIfBlockchainOutdated(quint64& _current, quint64& _marcoin) const;
  QFileInfo currentBlockchainInfo() const;
  QFileInfo marcoinBlockchainInfo() const;

  void copyProgress(quint64 _copied, quint64 _total);
  void installBlockchain();

Q_SIGNALS:
  void copyFileSignal(const QString& _sourcePath, const QString& _targetPath);
  void showMessageSignal(const QString& _message);
};

class AsyncFileProcessor : public QObject {
  Q_OBJECT

public:
  AsyncFileProcessor();
  ~AsyncFileProcessor();

  void copy(const QString& _sourcePath, const QString& _targetPath);

Q_SIGNALS:
  void copyProgressSignal(quint64 _copied, quint64 _total);
  void copyFinished();
  void errorSignal(int _error);
};

}
